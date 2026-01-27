/*
 * Program: shoppingcart.c
 * Purpose: shopping cart program
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-27
 */

#include <stdio.h>
#include <string.h>

// Constants
#define CURRENCY '$'

int main() {

  char item[50] = "";
  double price = 0.0, total = 0.0;
  int quantity = 0;

  printf("What item would you like to buy?: ");
  fgets(item, sizeof(item), stdin);
  item[strlen(item) - 1] = '\0';

  printf("What is the price for each item?: ");
  scanf("%lf", &price);

  printf("How many would you like?: ");
  scanf("%d", &quantity);

  // fomular for calculating total price
  total = price * quantity;

  printf("\nYou have bought %d %s/s\n", quantity, item);
  printf("The Total is: %c%.2f\n", CURRENCY, total);

  return 0;
}
