#include <stdio.h>

// Build a new program that prompts a user for data and determins a commission
// using the following formula: commissionion = Rate * (Sale Price - Cost)

int main() {

  float sale_price = 0.0f;
  float cost = 0.0f;
  float commission = 0.0f;
  float rate = 0.0f;
  char symbol = '$';

  // user input
  printf("Enter Sale Price: ");
  scanf("%f", &sale_price);

  printf("Enter Cost: ");
  scanf("%f", &cost);

  printf("Enter Your Rate e.g 0.10 = 10%% ");
  scanf("%f", &rate);

  // formula
  commission = rate * (sale_price - cost);

  printf("\nSales Price: %c%.2f\n", symbol, sale_price);
  printf("Cost: %8c%.2f\n", symbol, cost);
  printf("Your Rate: %8.2f\n", rate);
  printf("\nTotal Commission: %c%.2f\n", symbol, commission);

  return 0;
}
