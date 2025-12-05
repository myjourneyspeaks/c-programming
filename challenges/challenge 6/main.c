#include <stdio.h>

// Sum function prototype
int sum(int a, int b);

int main() {

  // Q: Write a program to find the Sum of two numbers entered by the user.

  int a = 0;
  int b = 0;
  int result = 0;

  // Prompt user input
  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  // sum formulae
  result = sum(a, b);

  printf("Sum: %d", result);

  return 0;
}

int sum(int a, int b) { return a + b; }
