#include <math.h>
#include <stdio.h>
// #include <time.h>

// prototypes
int sizeNumber();

int main() {

  // Binary to decimal
  int size = sizeNumber();
  int binary[64] = {0};
  int decimal = 0;

  printf("Convert Binary to Decimal\n");

  for (int i = 0; i < size; i++) {
    printf("Enter your binary code: ");
    scanf("%d", &binary[i]);
  }

  // binary check
  for (int i = 0; i < size; i++) {
    if (binary[i] >= 0 && binary[i] <= 1) {
      printf("%d ", binary[i]);
    } else {
      printf("Invalid ");
    }
  }

  // calculations
  for (int i = 0; i < size; i++) {
    int power = size - 1 - i;
    decimal += binary[i] * pow(2, power);
  }

  printf("\nDecimal Equivalent: %d", decimal);

  // for (int i = 0; i < size; i++) {
  //   printf("%d ", binary[i]);
  // }

  return 0;
}

// Enter number of binary
int sizeNumber() {
  int size = 0;
  printf("Enter size of your binary number: ");
  scanf("%d", &size);
  return size;
}
