#include <stdio.h>

// Create a program, that prompts a user for numbers and determines total
// revenue using the following formula: Total Revenue = Price * Quantity.
int main() {

  float price = 0.0f;
  int quantity = 0;
  float total_revenue = 0.0f;
  char symbol = '$';

  printf("T-shirt Price: ");
  scanf("%f", &price);

  printf("Quantity: ");
  scanf("%d", &quantity);

  // formula
  total_revenue = price * quantity;

  printf(" Total Revenue = %c%.2f\n", symbol, total_revenue);

  return 0;
}
