#include <stdio.h>

// prototype
int fibonacci(int n);

int main() {

  // Q: Write a program to print the Fibonacci series using recursion.

  int n = 0;
  int j = 0;

  printf("**** Fibonacci Series Program ****\n");
  printf("Enter any number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("%d ", fibonacci(j));
    j++;
  }

  return 0;
}

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}
