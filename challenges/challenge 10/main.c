#include <stdio.h>

// prototype
void numCompare(int a, int b, int c);

int main() {

  // Q: Write a Program to find the largest number among three numbers

  int a = 20;
  int b = 10;
  int c = 20;

  numCompare(a, b, c);

  return 0;
}

// Number checker function
void numCompare(int a, int b, int c) {
  if (a >= b && a >= c) {
    printf("The Largest Number is: %d", a);
  } else if (b >= a && b >= c) {
    printf("The Largest Number is: %d", b);
  } else {
    printf("The Largest Number is: %d", c);
  }
}
