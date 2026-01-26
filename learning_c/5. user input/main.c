/*
 * Program: userInput.c
 * Purpose: demonstrating on collecting user input
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-26
 */

#include <stdio.h>
#include <string.h> //advanced

int main(void) {

  int age = 0;
  double gpa = 0.0;
  char grade = '\0'; // null
  char name[30] = "";

  // Enter your age
  printf("Enter your age: ");
  scanf("%d", &age);

  // Enter your gpa
  printf("Enter your GPA: ");
  scanf("%lf", &gpa);

  // Enter your grade
  printf("Enter your grade: ");
  scanf(" %c", &grade);

  // Enter your name
  getchar(); // removes extra line from the buffer
  printf("What is your full name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  // Display unser input
  printf("%s\n", name);
  printf("%d\n", age);
  printf("%.2f\n", gpa);
  printf("%c\n", grade);

  return 0;
}
