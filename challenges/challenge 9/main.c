#include <stdio.h>

// function prototypes
int checkOddEven(int n);
int bitcheckOddEven(int z);

int main() {

  //  Q: Write a Program to check if the given number is Even or Odd.

  int n = 6;
  int z = 7;

  // function call
  checkOddEven(n);
  printf("\n");
  bitcheckOddEven(z);

  return 0;
}

// using a simple function
int checkOddEven(int n) {
  // formulae
  int r = n % 2;

  // condition
  if (r == 0) {
    printf("Even");
  } else {
    printf("Odd");
  }

  return n;
}

// using bitwise function
int bitcheckOddEven(int z) {
  if (z & 1) {
    printf("Odd");
  } else {
    printf("Even");
  }
  return z;
}
