/*
Program: memorysize.c
Purpose: checking the size of datatypes
Author: Vusumuzi Lindelwe
Date: 10/02/26
*/

#include <stdio.h>

int main(void)
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("The size of int: %zu\n", sizeof(myInt));
    printf("The size of float: %zu\n", sizeof(myFloat));
    printf("The size of double: %zu\n", sizeof(myDouble));
    printf("The size of char: %zu\n", sizeof(myChar));
    return 0;
}