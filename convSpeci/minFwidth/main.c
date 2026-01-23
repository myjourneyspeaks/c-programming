/* Minimum filed width */

#include <stdio.h>

int main(void) {

  // The minimum field width --> m <-- specifies the minimum number of
  // characters to print. If the value to be printed requires fewer than m
  // characters, the value is right-justified within the field.

  int ranNum = 123;

  printf("%10d\n", ranNum);

  // putting a minus sign in front of m causes left justification

  printf("%-10d\n", ranNum);

  return 0;
}
