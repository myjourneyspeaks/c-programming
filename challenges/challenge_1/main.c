#include <stdio.h>

int main() {
  // challenge one: given a = 5, x = 1, and y = 5, create a program that outputs
  // the result of the formula f = (a - b))(x - y).

  int a = '\0';
  int x = '\0';
  int y = '\0';
  int f = '\0';

  // int a, x, y, f;

  // User input
  printf("Enter Number A: ");
  scanf("%d", &a);

  printf("Enter Number X: ");
  scanf("%d", &x);

  printf("Enter Number Y: ");
  scanf("%d", &y);

  // formula
  f = a - x * x - y;

  printf("===== Arithmetic Program =====\n");
  printf("a = %d, x = %d, y = %d \n", a, x, y);
  printf(" f = %d", f);

  return 0;
}
