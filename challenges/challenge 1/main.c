#include <stdio.h>

int main() {
  // challenge one: given a = 5, x = 1, and y = 5, create a program that outputs
  // the result of the formula f = (a - b)(x - y).

  int a = 5;
  int x = 1;
  int y = 5;
  int f = 0;

  // formula
  f = (a - x) * (x - y);

  printf("a = %d, x = %d, y = %d \n", a, x, y);
  printf(" f = %d", f);

  return 0;
}
