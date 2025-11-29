#include <stdio.h>

int main() {

  // Q: Write a program to swap the values of two variables.

  int a = 50;
  int b = 10;
  int temp = 0;

  // swapping
  temp = a;
  a = b;
  b = temp;

  printf("a = %d, b = %d", a, b);

  return 0;
}
