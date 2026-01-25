/*
 * Program: arithmeticOperation.c
 * Purpose: Perform arithmetic in C
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25*/

#include <stdio.h>

int main(void) {

  // arithmetic operators = + - * / % ++ --
  // int x = 20;
  // int y = 15;
  // int z = 0;
  // float y = 15;
  // float z = 0;

  int x = 10;
  int y = 2;
  int z = 0;

  // z = x + y;
  // z = x - y;
  // z = x * y;
  // z = x / y;
  // z = x % y;
  // x++;
  // y--;

  // === augmented assignment operators ===
  x += 2;
  x -= 3;
  x *= 4;
  x /= 2;

  printf("%d\n", x);

  return 0;
}
