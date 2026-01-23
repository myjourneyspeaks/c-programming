#include <stdio.h>

void countDown(int n);

int main() {

  // recursive function is a function that calls itself until it doesn't
  countDown(5);

  return 0;
}

void countDown(int n) {
  printf("%d ", n--);
  if (n > 0)
    countDown(n);
}
