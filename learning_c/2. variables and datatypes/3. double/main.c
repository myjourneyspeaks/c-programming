/*
 * Program: double.c
 * Purpose: double datatype
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdio.h>

int main(void) {

  // double stores fractional numbers, containing one or more decimals. 8 bytes
  // of memory

  double pi = 3.14159265358979;
  double e = 2.7182818284590;

  printf("The value of pi is %.15lf\n", pi);
  printf("The value of e is %.15lf\n", e);

  return 0;
}
