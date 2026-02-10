/*
 * Program: formatSpecWidth.c
 * Purpose: format specifier width
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdio.h>

int main(void) {

  int num1 = 1;
  int num2 = 10;
  int num3 = 500;
  int num4 = -500;

  printf("%4d\n", num1);
  printf("%4d\n", num2);
  printf("%4d\n", num3);

  printf("\n%-4d\n", num1);
  printf("%-4d\n", num2);
  printf("%-4d\n", num3);

  printf("\n%04d\n", num1);
  printf("%04d\n", num2);
  printf("%04d\n", num4);

  printf("\n%+d\n", num1);
  printf("%+d\n", num2);
  printf("%+d\n", num3);

  return 0;
}
