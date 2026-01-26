/*
 * Program: userInput.c
 * Purpose: demonstrating on collecting user input
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-26
 */

#include <stdio.h>

int main(void) {

  int age = 0;
  float gpa = 0.0f;
  char grade = '\0'; // null
  char name[30] = "";

  // === User Input ===

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your GPA: ");
  scanf("%f", &gpa);

  printf("Enter your grade: ");
  scanf(" %c", &grade);

  // === Display User Input ===
  printf("%s\n", name);
  printf("%d\n", age);
  printf("%.2f\n", gpa);
  printf("%c\n", grade);

  return 0;
}
