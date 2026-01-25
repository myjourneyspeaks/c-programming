/*
 * Program: arithmeticOperation.c
 * Purpose: Perform arithmetic in C
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25*/

#include <stdio.h>

int main(void) {

  // arithmetic operators = + - * / % ++ --
  int x = 20;
  int y = 15;
  int z = 0;
  // float y = 15;
  // float z = 0;

  z = x + y;
  z = x - y;
  z = x * y;
  z = x / y;
  z = x % y;
  x++;
  y--;

  printf("%d\n", z);

  return 0;
}
