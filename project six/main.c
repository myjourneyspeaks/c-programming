#include <stdio.h>

int main() {
  // Temperature Conversion program
  char choice = '\0';
  float fahrenheit = 0.0f;
  float celsius = 0.0f;

  printf("Temperature Conversion Program\n");
  printf("C. Celsius to Fahrenheit\n");
  printf("F. Fahrenheit to Celsius\n");
  printf("Is the temp in Celsius (C) or Fahrenheit (F)? :\n");
  scanf("%c", &choice);

  if (choice == 'C') {
    // C to F
  } else if (choice == 'F') {
    // F to C
  } else {
    printf("Invalid choice! PLease select C or F\n");
  }

  return 0;
}
