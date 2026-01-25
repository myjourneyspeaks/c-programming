/*
 * Program: formatSpecifer1.c
 * Purpose: format specifier
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdio.h>

int main(void) {

  int age = 23;
  float price = 900.50f;
  double randNum = 90.48377493;
  char currency = '$';
  char name[] = "Vusumuzi Lindelwe";
  char surname[] = "Khumalo";

  printf("\nName: %s\n", name);
  printf("Surname: %s\n", surname);
  printf("Age: %d\n", age);
  printf("Networth: %c %.2f\n", currency, price);
  printf("Fun level: %lf\n", randNum);

  return 0;
}
