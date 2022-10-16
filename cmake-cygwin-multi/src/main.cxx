#include "../include/fabonacci.hpp"
#include <vector>

int main(int, char **) {
  cout << "Hello, world!\n";
  int rst = 0;
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i : v) {
    rst = fabonacci(i);
    cout << rst << endl;
  }
  return 0;
}
