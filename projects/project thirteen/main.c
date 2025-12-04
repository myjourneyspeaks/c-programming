#include <ctype.h>
#include <stdio.h>

int main() {

  // QUIZ GAME

  char questions[][100] = {"What is the largest planet in the solar system?",
                           "WHat is the hottest planet?",
                           "What planet has the most moon?",
                           "Is the Earth flat?"};
  char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                         "A. Mercury\nB. Venus\nC. Uranus\nD. Mars",
                         "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                         "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};
  char ansewerKey[] = {'A', 'B', 'D', 'B'};

  int questionCount = sizeof(questions) / sizeof(questions[0]);
  char guess = '\0';
  int score = 0;

  printf("**** QUIZ GAME ****\n");

  for (int i = 0; i < questionCount; i++) {
    printf("\n%s\n", questions[i]);
    printf("\n%s\n", options[i]);
    printf("\nEnter your choice: ");
    scanf(" %c", &guess);

    guess = toupper(guess); // convert lowercase to uppercase

    if (guess == ansewerKey[i]) {
      printf("CORRECT!\n");
      score++;
    } else {
      printf("WRONG!\n");
    }
  }

  printf("\nYour score is %d out of %d pounts", score, questionCount);

  return 0;
}
