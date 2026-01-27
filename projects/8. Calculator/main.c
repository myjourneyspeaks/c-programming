/*
 * Program: calculator.c
 * Purpose: compute calculations
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-27
 */

#include <stdio.h>

int main(void) {
  // Calculator

  char operator = '\0';
  double num1 = 0.0;
  double num2 = 0.0;
  double result = 0.0;

  printf("Enter the first number: ");
  scanf("%lf", &num1);

  // getchar();
  printf("Enter the operator ( + - * / ): ");
  scanf(" %c", &operator);

  printf("Enter the second number: ");
  scanf("%lf", &num2);

  switch (operator) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
  case '/':
    if (num2 == 0) {
      printf("You can't divide by zero!\n");
    } else {
      result = num1 / num2;
    }
    break;
  default:
    printf("Invalid operator\n");
  }

  printf("Result: %.4f", result);

  return 0;
}
