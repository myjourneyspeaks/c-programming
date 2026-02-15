/*
Program: taxCal.c
Purpose: Adds tax to the amount entered by the user
Author: Vusumuzi Lindelwe
Date: 15/02/26
*/

#include <stdio.h>

#define FIVE_PERCENT_TAX 0.05
#define DOLLAR_SYMBOL '$'

int main(void)
{

    double amount;
    double tax;

    printf("Enter an amount: ");
    scanf("%lf", &amount);

    tax = amount * (1 + FIVE_PERCENT_TAX);

    printf("With tax added: %c%.2f", DOLLAR_SYMBOL, tax);

    return 0;
}
