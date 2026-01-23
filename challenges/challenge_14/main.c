#include <stdio.h>

// prototype
int naturalNum(int n);

int main() {

  int n = 0;
  printf("Enter a Natural Number: ");
  scanf("%d", &n);

  printf("Output: %d", naturalNum(n));

  return 0;
}

int naturalNum(int n) {
  if (n == 0) {
    return 0;
  }
  return n + naturalNum(n - 1);
}
