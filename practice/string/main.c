#include <stdio.h>
#include <string.h>

int main() {
  char name[20] = "";
  char surname[20] = "";
  char gender[10] = "";
  char school[50] = "";

  printf("What is your name?: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  printf("What is your surname?: ");
  fgets(surname, sizeof(surname), stdin);
  surname[strlen(surname) - 1] = '\0';

  printf("Gender: ");
  fgets(gender, sizeof(gender), stdin);
  gender[strlen(gender) - 1] = '\0';

  printf("School: ");
  fgets(school, sizeof(school), stdin);
  school[strlen(school) - 1] = '\0';

  printf("\n======== Your Information ========\n");
  printf("Full Name: %15s %s\n", name, surname);
  printf("Gender   : %2s\n", gender);
  printf("School   : %2s\n", school);
}
