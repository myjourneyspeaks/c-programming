/* Tax Calculator */

#include <stdio.h>

// constant def
#define TAX 5 / 100

int main(void)
{

    float amount = 0.0f;
    float calTax = 0.0f;
    float result = 0.0f;

    // user input
    printf("Enter an amount: ");
    scanf("%f", &amount);

    // formula
    calTax = amount * TAX;
    result = amount + calTax;

    // display result
    printf("Your amount with tax added: %.2f", result);

    return 0;
}