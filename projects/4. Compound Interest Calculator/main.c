/*
 * Program: compoundinterestcal.c
 * Purpose: Demonstrating how to calculate compound interest
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-27
 */

#include <math.h>
#include <stdio.h>

int main(void) {

  double principal = 0.0, rate = 0.0, total = 0.0;
  int years = 0;
  int timesCompounded = 0;

  printf("=== Compound Interest Calculator ===\n");

  printf("Enter the principal (P): ");
  scanf("%lf", &principal);

  printf("Enter the interest rate %% (r): ");
  scanf("%lf", &rate);

  // formula
  rate = rate / 100;

  printf("Enter the # of years (t): ");
  scanf("%d", &years);

  printf("Enter # of times compounded per year (n): ");
  scanf("%d", &timesCompounded);

  // formula
  total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

  printf("After %d years, the total will be $%.2f", years, total);

  return 0;
}
