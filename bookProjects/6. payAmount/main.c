/* Program that asks the user to enter a U.S dollar amount ans then shows how to pay that amount using the smallest number of $20, $10, $5 and $1 bills */

#include <stdio.h>

int main(void)
{

    // variables
    int dollarAmount = 0;
    int twentyBills = 0, tenBills = 0, fiveBills = 0, oneBill = 0;

    // user input
    printf("Enter a dollar amount: ");
    scanf("%d", &dollarAmount);

    // calculation
    twentyBills = dollarAmount / 20;
    tenBills = (dollarAmount - (twentyBills * 20)) / 10;
    fiveBills = (dollarAmount - (twentyBills * 20) - (tenBills * 10)) / 5;
    oneBill = (dollarAmount - (twentyBills * 20) - (tenBills * 10) - (fiveBills * 5)) / 1;

    // display
    printf("\n$20 bills: %d\n", twentyBills);
    printf("$10 bills: %d\n", tenBills);
    printf("$5 bills: %2d\n", fiveBills);
    printf("$1 bills: %2d\n", oneBill);

    return 0;
}