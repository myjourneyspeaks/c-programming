#include <stdio.h>

int main() {

  // array = a fixed-size collection of elements of the same data type
  // Emptiness;
  //         (Similar to a variable, but it holds more than 1 value)

  int numbers[] = {10, 20, 30, 40, 50, 60};
  char grades[] = {'A', 'B', 'C', 'D', 'E', 'F', 'X', 'U'};
  char name[] = "Vusumuzi Lindelwe";

  // numbers[0] = 100;
  // numbers[1] = 90;
  // numbers[2] = 80;
  // numbers[3] = 70;
  // numbers[4] = 60;
  //
  // printf("%d\n", numbers[0]);
  // printf("%d\n", numbers[1]);
  // printf("%d\n", numbers[2]);
  // printf("%d\n", numbers[3]);
  // printf("%d\n", numbers[4]);
  //
  //
  // printf("\n%c", grades[3]);
  // printf("\n%c", name[2]);

  // printf("%zu\n", sizeof(numbers));
  // printf("%zu\n", sizeof(numbers[0]));

  int size = sizeof(grades) / sizeof(grades[0]);

  for (int i = 0; i < size; i++) {
    printf("%c ", grades[i]);
  }

  return 0;
}
