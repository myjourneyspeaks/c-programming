#include <stdbool.h>
#include <stdio.h>

int main() {
  // logical operators are used to combine or modify boolean espressions.

  // && = AND
  // || = OR
  // ! = NOT

  // int temp = -4;
  bool isSunny = false;

  // ------ Using the AND operator --------

  // if (temp > 0 && temp < 30) {
  //   printf("The temperature is Good");
  // } else {
  //   printf("The temperature is BAD");
  // }

  // ----- Using the OR operator --------

  // if (temp <= 0 || temp >= 30) {
  //   printf("The temperature is BAD");
  //
  // } else {
  //   printf("The temperature is GOOD");
  // }

  if (!isSunny) {
    printf("It is CLOUDY outside");
  } else {
    printf("It is SUNNY outside");
  }

  return 0;
}
