/*
 * Program: char.c
 * Purpose: Char datatype
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */

#include <stdio.h>

int main(void)
{

  // char stores a single character such as a letter, digit, or symbol.

  char grade = 'A';
  char symbol = '!';
  char currency = '$';

  printf("Your grade is %c\n", grade);
  printf("Your favourite symbol is %c\n", symbol);
  printf("Your currency symbol is %c\n", currency);

  return 0;
}
