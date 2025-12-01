#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototypes
int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {

  // ROCK PAPER SCISSORS
  srand(time(NULL));

  printf("***** ROCK PAPER SCISSORS *****\n");

  int userChoice = getUserChoice();
  int computerChoice = getComputerChoice();

  switch (userChoice) {
  case 1:
    printf("You Choose ROCK!\n");
    break;
  case 2:
    printf("You Choose PAPER!\n");
    break;
  case 3:
    printf("You Choose SCISSORS\n");
    break;
  }

  switch (computerChoice) {
  case 1:
    printf("Computer Choose ROCK!\n");
    break;
  case 2:
    printf("Computer Choose PAPER!\n");
    break;
  case 3:
    printf("Computer Choose SCISSORS\n");
    break;
  }

  checkWinner(userChoice, computerChoice);

  return 0;
}

int getComputerChoice() { return (rand() % 3) + 1; }
int getUserChoice() {

  int choice = 0;

  do {
    printf("Choose an Option\n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSORS\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);

  } while (choice < 1 || choice > 3);

  return choice;
}
void checkWinner(int userChoice, int computerChoice) {
  if (userChoice == computerChoice) {
    printf("It's a TIE!!!");
  } else if (userChoice == 1 && computerChoice == 3) {
    printf("You WIN!!!");
  } else if (userChoice == 2 && computerChoice == 1) {
    printf("You WIN!!!");
  } else if (userChoice == 3 && computerChoice == 2) {
    printf("You WIN!!!");
  } else {
    printf("You LOSE!!!");
  }
}
