#include "fabonacci.hpp"

int fabonacci(int n) {
  int f = 1;
  int g = 1;
  int rst = f;
  if (n <= 2) {
    return rst;
  }

  while (n-- > 2) {
    rst = f + g;
    f = g;
    g = rst;
  }
  return rst;
}