#include <stdio.h>

int add(int x, int y) {
  int result = x + y;
  return result;
}

int subtract(int x, int y) {
  int result = x - y;
  return result;
}

int main() {

  // variable scope refers to where a variable is recognized and accessible
  //                variables can share the same name if
  //                they're in different scopes {}

  // int result = add(3, 4);
  int result = subtract(3, 4);

  printf("%d", result);

  return 0;
}
