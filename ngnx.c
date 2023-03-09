#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *args[])
{
	if (argc < 2)
	{
		system("cd /d E:\\PHP\\PhpDev\\nginx-1.19.2 && start nginx");
	}
	else
	{
		if (strcmp(args[1], "run") == 0 || strcmp(args[1], "start") == 0)
		{
			system("cd /d E:\\PHP\\PhpDev\\nginx-1.19.2 && start nginx");
		}
		else if (strcmp(args[1], "reload") == 0 || strcmp(args[1], "restart") == 0)
		{
			system("cd /d E:\\PHP\\PhpDev\\nginx-1.19.2 && nginx -s reload");
		}
		else if (strcmp(args[1], "exit") == 0 || strcmp(args[1], "quit") == 0 || strcmp(args[1], "shtd") == 0 || strcmp(args[1], "stop") == 0)
		{
			system("cd /d E:\\PHP\\PhpDev\\nginx-1.19.2 && nginx -s quit");
		}
		else
		{
			;
		}
	}

	return 0;
}