/*
 * Program: date.c
 * Purpose: promting the user to enter date
 * Author: Vusumuzi Lindelwe
 * Date: 2026-02-10
 */

#include <stdio.h>

int main(void)
{

  int month, day, year;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d /%d /%d", &month, &day, &year);

  printf("Dated this %d", day);
  switch (day)
  {
  case 1:
  }

  return 0;
}
