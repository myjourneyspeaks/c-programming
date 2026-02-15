/*
 * Program: float.c
 * Purpose: floating-point datatype
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdio.h>

int main(void)
{

  // Floating-point numbers represent real numbers that may include decimal (fractional) parts, such as 0.9, 78.99, and -99.76.

  float mark = 97.8f;
  float price = 19.99f;

  printf("You got %.2f%%\n", mark);
  printf("At Wendy's, icecream cosy $%.2f\n", price);

  return 0;
}
