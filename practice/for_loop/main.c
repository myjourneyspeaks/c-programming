#include <stdio.h>

int main() {

  int num[5] = {0};
  int i;

  do {
    for (i = 0; i < 5; i++) {
      printf("Enter number greater than 0: ");
      scanf("%d", &num[i]);
    }
  } while (num[i] <= 0 || num[i] <= 1);

  return 0;
}
