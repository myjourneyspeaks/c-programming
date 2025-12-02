#include <stdio.h>

// prototype
int calfactorial(int n);

int main() {

  // Q: Write a program to find the factorial of a given number

  int n = 0;
  printf("Enter any whole number: ");
  scanf("%d", &n);

  printf("Factorial of %d is: %d", n, calfactorial(n));

  return 0;
}

// function
int calfactorial(int n) {
  if (n == 0) {
    return 1;
  }

  return calfactorial(n - 1) * n;
}
