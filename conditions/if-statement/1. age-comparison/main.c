/*
 * Program: agecom.c
 * Purpose: demonstrating how to use if statement
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-29
 */

#include <stdio.h>

int main(void) {

  int age = 0;

  printf("How old are you? ");
  scanf("%d", &age);

  if (age >= 65) {
    printf("You are a senior\n");
  } else if (age >= 18) {
    printf("You are an adult\n");
  } else if (age < 0) {
    printf("You haven't been born yet\n");
  } else if (age == 0) {
    printf("You are a newborn\n");
  } else {
    printf("You are a child\n");
  }

  return 0;
}
