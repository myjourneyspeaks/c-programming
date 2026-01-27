/*
 * Program: tempConversion.c
 * Purpose: demonstrating how to convert tempratature from celsius to fahrenheit
 * Author: Vusmuzi Lindelwe
 * Date: 2026-01-27
 */

#include <stdio.h>

int main(void) {
  // Temperature Conversion program
  char choice = '\0';
  double fahrenheit = 0.0f, celsius = 0.0f;

  printf("Temperature Conversion Program\n");
  printf("C. Celsius to Fahrenheit\n");
  printf("F. Fahrenheit to Celsius\n");
  printf("Is the temp in Celsius (C) or Fahrenheit (F)? :\n");
  scanf("%c", &choice);

  if (choice == 'C') {
    // C to F
    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.1f Celsius is equal to %.1f Fahrenheit", celsius, fahrenheit);
  } else if (choice == 'F') {
    // F to C
    printf("Enter thr tempetature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.1f Fahrenheit is equal to %.1f Celsius.", fahrenheit, celsius);
  } else {
    printf("Invalid choice! PLease select C or F\n");
  }

  return 0;
}
