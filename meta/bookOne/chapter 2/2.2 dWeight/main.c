/* Computes the dimensional wieght of a box from input provided by the user */

#include <stdio.h>

// using #define for constants
#define INCHES_PER_POUND 166

int main(void) {

  // variable declaraction
  int height, length, width, volume, weight;

  // user input using printf and scanf
  printf("Enter height of box: ");
  scanf("%d", &height);
  printf("Enter length of box: ");
  scanf("%d", &length);
  printf("Enter width of box: ");
  scanf("%d", &width);

  // fomulaes
  volume = height * length * width;
  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

  // display result
  printf("Volume (cubic inches) : %d\n", volume);
  printf("Dimensional wieght (pound) : %d\n", weight);

  return 0;
}
