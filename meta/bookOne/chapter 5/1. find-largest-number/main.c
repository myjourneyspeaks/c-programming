/*
 * Program: largenum.c
 * Purpose: using if statement to find the largest number
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-29
 */

#include <stdio.h>

int main(void) {

  int i = 0, j = 0, k = 0, max;

  printf("Enter First Whole Number: ");
  scanf("%d", &i);
  printf("Enter Second Whole Number: ");
  scanf("%d", &j);
  printf("Enter Third Whole Number: ");
  scanf("%d", &k);

  // if (i > j)
  //   if (i > k)
  //     max = i;
  //   else
  //     max = k;
  // else if (j > k)
  //   max = j;
  // else
  //   max = k;

  if (i > j) {
    if (i > k) {
      max = i;
    } else {
      max = k;
    }
  } else {
    if (j > k) {
      max = j;
    } else {
      max = k;
    }
  }

  printf("max = %d", max);

  return 0;
}
