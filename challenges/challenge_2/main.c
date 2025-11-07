#include <stdio.h>
#include <string.h>

// Program that prompts a user for a name, Stores the user's name using scanf();
// function and return a greeting back to the user using the user's name.

int main() {

  char username[50] = "";

  // Prompts user to enter name
  printf("What is your name?: ");
  fgets(username, sizeof(username), stdin);
  username[strlen(username) - 1] = '\0';

  // greeting the user
  printf("Hello %s, nice to meet you!\n", username);

  return 0;
}
