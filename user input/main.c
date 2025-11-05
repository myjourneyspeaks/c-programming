#include <stdio.h>
#include <string.h> //advanced

int main() {

  int age = 0;
  float gpa = 0.0f;
  char grade = '\0';
  char name[30] = "";

  // Enter your age
  printf("Enter your age: ");
  scanf("%d", &age);

  // Enter your gpa
  printf("Enter your GPA: ");
  scanf("%f", &gpa);

  // Enter your grade
  printf("Enter your grade: ");
  scanf(" %c", &grade);

  // Enter your name
  getchar(); //
  printf("What is your full name: ");
  // scanf("%s", name);
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  // Display unser input
  printf("%s\n", name);
  printf("%d\n", age);
  printf("%.2f\n", gpa);
  printf("%c\n", grade);
  // printf("%s\n", name);

  return 0;
}
