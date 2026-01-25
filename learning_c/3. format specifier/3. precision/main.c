/*
 * Program: formatSpecPrecision.c
 * Purpose: format specifier precision
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdio.h>

int main(void) {

  float price1 = 20.99;
  float price2 = 1.99;
  float price3 = -100.00;
  char symbol = '$';

  printf("\n%c %7.2f\n", symbol, price1);
  printf("%c %7.2f\n", symbol, price2);
  printf("%c %7.2f\n", symbol, price3);

  return 0;
}
