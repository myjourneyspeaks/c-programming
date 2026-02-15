/*
Program: polynomial.c
Purpose: Program that displays the value of the polynomial
Author: Vusumuzi Lindelwe
Date: 15/02/26
*/

#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))
#define QUAD(x) ((x) * (x) * (x) * (x))
#define FIFTH(x) ((x) * (x) * (x) * (x) * (x))

int main(void)
{
    long long num;
    long long total;

    printf("Enter num x: ");
    scanf("%d", &num);

    total = (3 * (FIFTH(num))) + (2 * (QUAD(num))) - (5 * (CUBE(num))) - (SQUARE(num)) + (7 * num) - 6;

    printf("Total: %d", total);

    return 0;
}
