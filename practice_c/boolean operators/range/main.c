#include <stdio.h>

int main() {

  int numBer = 0;

  printf("Enter number from 1 to 10: ");
  scanf("%d", &numBer);

  if (numBer < 1 || numBer > 10) {
    printf("Number not in range");
  } else {
    printf("Number in range");
  }

  return 0;
}
