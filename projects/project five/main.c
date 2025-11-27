#include <stdio.h>

int main() {

  // Weight convertor
  int choice = 0;
  float kilogram = 0.0f;
  float pound = 0.0f;

  printf("Weight Conversion Calculator\n");
  printf("1. Kilograms to Pounds\n");
  printf("2. Pound to Kilograms\n");
  printf("Enter your choice (1 or 2): \n");
  scanf("%d", &choice);

  if (choice == 1) {
    // Kilograms to Pounds
    printf("Enter the weight in Kilograms: ");
    scanf("%f", &kilogram);
    pound = kilogram * 2.20462;
    printf("%.2f kilograms is equal to %.2f pounds\n", kilogram, pound);
  } else if (choice == 2) {
    // Pounds to Kilograms
    printf("Enter the weight in Pounds: ");
    scanf("%f", &pound);
    kilogram = pound / 2.20462;
    printf("%.2f pounds is equal to %.2f kilogram\n", pound, kilogram);
  } else {
    // invalid
    printf("Invalid choice! Please enter valid choice (1 or 2) ");
  }

  return 0;
}
