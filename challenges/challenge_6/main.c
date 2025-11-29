#include <stdio.h>

int main() {

  // Q: Write a program to find the Sum of two numbers entered by the user.

  int a, b, sum = 0;

  // Prompt user input
  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  // sum formulae
  sum = a + b;

  printf("Sum: %d", sum);

  return 0;
}
