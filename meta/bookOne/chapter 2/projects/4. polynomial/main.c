/* A program that calculates the value of a polynomial */

#include <stdio.h>

// prototype
int squared(int x);
int cubic(int x);
int quad(int x);
int quantiple(int x);

int main(void)
{

    // variables
    int x = 0;
    int result = 0;

    // user input
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // formula
    result = (3 * quantiple(x)) + (2 * quad(x)) - (5 * cubic(x)) - squared(x) + (7 * x) - 6;

    // display
    printf("The value of x: %d", result);

    return 0;
}

// functions
int squared(int x)
{
    return x * x;
}

int cubic(int x)
{
    return x * x * x;
}

int quad(int x)
{
    return x * x * x * x;
}

int quantiple(int x)
{
    return x * x * x * x * x;
}