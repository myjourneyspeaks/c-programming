/*
 * Program: bool.c
 * Purpose: Demonstrates the boolean data type
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{

  bool isOnline = true;
  bool isStudent = true;
  bool isMarried = false;
  bool forSale = false;

  if (isOnline)
  {
    printf("You are online\n");
  }
  else
  {
    printf("You are offline\n");
  }

  if (isStudent)
  {
    printf("You are a student\n");
  }
  else
  {
    printf("You are not a student\n");
  }

  if (isMarried)
  {
    printf("Congratulations to your happy marriage\n");
  }
  else
  {
    printf("When are you getting married\n");
  }

  if (forSale)
  {
    printf("Yes this item is for sell\n");
  }
  else
  {
    printf("I can't sell you this item\n");
  }

  return 0;
}
