#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

char nginxDir[1024] = {0};

const char *findNginx();
void run(int argc, char *args[], const char *nginxUrl);

int main(int argc, char *args[])
{
	const char *nginxUrl = findNginx();
	run(argc, args, nginxUrl);
}

const char *findNginx()
{
	char buffer[1024] = {0};
	const char *command = "where nginx";
	FILE *fp = _popen(command, "r");
	fgets(buffer, sizeof(buffer), fp);
	_pclose(fp);
	strncpy(nginxDir, buffer, strlen(buffer) - strlen("\\nginx.exe"));
	return nginxDir;
}

void run(int argc, char *args[], const char *nginxUrl)
{
	char cmd[] = {"cd /d "};
	strcat(cmd, nginxUrl);
	if (argc < 2)
	{
		strcat(cmd, " && start nginx");
		system(cmd);
	}
	else
	{
		if (strcmp(args[1], "run") == 0 || strcmp(args[1], "start") == 0)
		{
			strcat(cmd, " && start nginx");
			system(cmd);
		}
		else if (strcmp(args[1], "reload") == 0 || strcmp(args[1], "restart") == 0)
		{
			strcat(cmd, " && nginx -s reload");
			system(cmd);
		}
		else if (strcmp(args[1], "exit") == 0 || strcmp(args[1], "quit") == 0 || strcmp(args[1], "shtd") == 0 || strcmp(args[1], "stop") == 0)
		{
			strcat(cmd, " && nginx -s quit");
			system(cmd);
		}
		else if (strcmp(args[1], "shtd") == 0 || strcmp(args[1], "stop") == 0)
		{
			system("taskkill /f /t /im nginx.exe");
		}
		else if (strcmp(args[1], "-h") == 0 || strcmp(args[1], "-help") == 0)
		{
			printf("to start nginx, please run ngnx, ngnx run or ngnx start \n");
			Sleep(25);
			printf("to restart nginx, please run ngnx reload or ngnx restart \n");
			Sleep(25);
			printf("to quit nginx, ngnx exit or ngnx quit \n");
			Sleep(25);
			printf("to force shutdown nginx, please run ngnx stop, ngnx shtd \n");
			Sleep(25);
		}
		else
		{
			;
		}
	}
}