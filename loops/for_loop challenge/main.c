#include <stdio.h>

int main() {

  int j;
  int i;

  // left side triangle
  // for (i = 1; i <= 5; i++) {
  //   for (j = 1; j <= i; j++) {
  //     printf("*");
  //   }
  //   printf("\n");
  // }
  // for (i = 1; i <= 5; i++) {
  //   for (j = 5; j >= i; j--) {
  //     printf("*");
  //   }
  //   printf("\n");
  // }

  // right side triangle
  // for (i = 1; i <= 5; i++) {
  //   for (j = 1; j <= 5 - i; j++) {
  //     printf(" ");
  //   }
  //   for (j = 1; j <= i; j++) {
  //     printf("*");
  //   }
  //   printf("\n");
  // }
  //

  // Diamond
  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= 5 - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
