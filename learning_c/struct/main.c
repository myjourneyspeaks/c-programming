#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  int age;
  float gpa;
  bool isFullTime;
} Student;

// prototype
void printStudent(Student student);

int main() {

  // struct = A custom container that holds multiple
  //          pieces of related information
  //          similar to objects in other languages

  Student student1 = {"Mike", 30, 2.5, true};
  Student student2 = {"Zumba", 20, 3.1, false};
  Student student3 = {"Rudo", 23, 2.8, true};
  Student student4 = {0};

  strcpy(student4.name, "Sandy");
  student4.age = 27;
  student4.gpa = 4.1;
  student4.isFullTime = true;

  // printf("%s\n", student1.name);
  // printf("%d\n", student1.age);
  // printf("%.2f\n", student1.gpa);
  // printf("%s\n", (student1.isFullTime) ? "Yes" : "No");
  //
  // printf("\n%s\n", student2.name);
  // printf("%d\n", student2.age);
  // printf("%.2f\n", student2.gpa);
  // printf("%s\n", (student2.isFullTime) ? "Yes" : "No");
  //
  // printf("\n%s\n", student3.name);
  // printf("%d\n", student3.age);
  // printf("%.2f\n", student3.gpa);
  // printf("%s\n", (student3.isFullTime) ? "Yes" : "No");
  //
  // printf("\n%s\n", student4.name);
  // printf("%d\n", student4.age);
  // printf("%.2f\n", student4.gpa);
  // printf("%s\n", (student4.isFullTime) ? "Yes" : "No");

  printStudent(student1);
  printStudent(student2);
  printStudent(student3);
  printStudent(student4);

  return 0;
}

void printStudent(Student student) {

  printf("Name: %s\n", student.name);
  printf("Age: %d\n", student.age);
  printf("GPA: %.2f\n", student.gpa);
  printf("FullTime: %s\n", (student.isFullTime) ? "Yes" : "No");
  printf("\n");
}
