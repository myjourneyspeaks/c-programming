#include <stdbool.h>
#include <stdio.h>
// #include <string.h>

int main() {

  // while loop continues some code WHILE the condition remains true
  //            conditions must be true for us to enter while loop

  // int num = 0;

  // do {
  //   printf("Enter a number greater than 0: ");
  //   scanf("%d", &num);
  // } while (num <= 0);

  // char name[50] = "";
  //
  // printf("Enter your name: ");
  // fgets(name, sizeof(name), stdin);
  // name[strlen(name) - 1] = '\0';
  //
  // while (strlen(name) == 0) {
  //   printf("Name cannot be empty! PLease enter your name: ");
  //   fgets(name, sizeof(name), stdin);
  //   name[strlen(name) - 1] = '\0';
  // }
  //
  // printf("Hello %s", name);

  bool isRunning = true;
  char response = '\0';

  while (isRunning) {
    printf("You are playing a game\n");
    printf("Would you like to continue? (Y = yes, N = no): ");
    scanf(" %c", &response);

    if (response == 'Y' || response == 'y') {
    } else if (response == 'N' || response == 'n') {
      isRunning = false;
    } else {
      printf("Invalid input. Please enter Y or N.\n");
    }
  }
  printf("You exit the game");

  return 0;
}
