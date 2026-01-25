/*
 * Program: float.c
 * Purpose: floating-point datatype
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdio.h>

int main(void) {

  // floating-point numbers are all numbers including signed and unsigned
  // decimal and fractional size numbers such as 0.9, 78.99, -99.76.

  float mark = 97.8;
  float price = 19.99;

  printf("You got %.2f%%\n", mark);
  printf("At wendy's icecream, icecream cosr $%.2f\n", price);

  return 0;
}
