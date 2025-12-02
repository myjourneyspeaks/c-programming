#include <stdio.h>

int main() {

  // 2D array = An array where each element is an array
  //            array[][] = {{}, {}, {}};

  int numbers[][3] = {{1, 2, 3}, {1, 2, 3}, {3, 5, 6}};

  for (int i = 0; i < 3; i++) {   // rows
    for (int j = 0; j < 3; j++) { // columns
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }

  return 0;
}
