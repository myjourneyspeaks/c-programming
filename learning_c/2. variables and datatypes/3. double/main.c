/*
 * Program: double.c
 * Purpose: Demonstrates the double data type
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdio.h>

int main(void)
{

  // A double stores real numbers with fractional parts and typically
  // uses 8 bytes of memory.

  double pi = 3.14159265358979;
  double e = 2.7182818284590;

  printf("The value of pi is %.15f\n", pi);
  printf("The value of e is %.15f\n", e);

  return 0;
}
