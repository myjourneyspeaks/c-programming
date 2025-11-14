#include <stdio.h>

int main() {

  // Weight convertor
  int choice = 0;
  float kilogram = 0.0f;
  float pound = 0.0f;

  printf("Weight Conversion Calculator\n");
  printf("1. Kilograms to Pounds");
  printf("2. Pound to Kilograms");
  printf("Enter your choice (1 or 2): \n");
  scanf("%d", &choice);

  if (choice == 1) {
    // Kilograms to Pounds
    printf("Enter the weight in Kilograms: ");
  } else if (choice == 2) {
    // Pounds to Kilograms
    printf("Enyer the weight in Pounds: ");
  } else {
    // invalid
    printf("invalid choice, please enter valid choice (1 or 2) ");
  }

  return 0;
}
