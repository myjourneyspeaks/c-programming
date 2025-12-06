#include <stdio.h>

void count_down(int n);

int main() {

  // recursive function is a function that calls itself until it doesn't
  count_down(5);

  return 0;
}

void count_down(int n) {
  printf("%d ", n--);
  if (n > 0)
    count_down(n);
}
