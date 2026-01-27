/*
 * Program: weightconvertor.c
 * Purpse: demonstrating how to convert weight from kilograms to pounds and vise
 * versa
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-27
 */

#include <stdio.h>

int main(void) {

  // Weight convertor
  int choice = 0;
  double kilogram = 0.0, pound = 0.0;

  printf("Weight Conversion Calculator\n");
  printf("1. Kilograms to Pounds\n");
  printf("2. Pound to Kilograms\n");
  printf("Enter your choice (1 or 2): \n");
  scanf("%d", &choice);

  if (choice == 1) {
    // Kilograms to Pounds
    printf("Enter the weight in Kilograms: ");
    scanf("%lf", &kilogram);
    pound = kilogram * 2.20462;
    printf("%.2f kilograms is equal to %.2f pounds\n", kilogram, pound);
  } else if (choice == 2) {
    // Pounds to Kilograms
    printf("Enter the weight in Pounds: ");
    scanf("%lf", &pound);
    kilogram = pound / 2.20462;
    printf("%.2f pounds is equal to %.2f kilogram\n", pound, kilogram);
  } else {
    // invalid
    printf("Invalid choice! Please enter valid choice (1 or 2) ");
  }

  return 0;
}
