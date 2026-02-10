/*
 * Program: string.c
 * Purpose: Demonstrates strings in C
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdio.h>

int main(void)
{

  // Strings in C are arrays of characters terminated by '\0'

  char name[] = "Vusumuzi Lindelwe";
  char food[] = "Pizza";
  char email[] = "example123@gmail.com";

  printf("Hi %s\n", name);
  printf("Your favourite food is %s\n", food);
  printf("Lastly your email is %s\n", email);

  return 0;
}
