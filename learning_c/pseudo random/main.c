#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // Pseudo-random = appear random but are determined by a mathematical
  //                 formula that uses a seed value to generate a
  //                 predictable sequence of numbers.
  //                 advance: Mersenne Twister of /dev/random

  // printf("%d", rand());
  srand(time(NULL));
  // printf("%d", rand());
  // printf("%d", RAND_MAX);

  int min = 20;
  int max = 100;

  int randomNUm = (rand() % (max - min + 1)) + min;
  int randomNU2 = (rand() % (max - min + 1)) + min;
  int randomNUm3 = (rand() % (max - min + 1)) + min;

  printf("%d %d %d", randomNUm, randomNU2, randomNUm3);

  return 0;
}
