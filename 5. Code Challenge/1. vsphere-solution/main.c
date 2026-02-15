/*
Program: vsphere.c
Purpose: Computes the volume of a sphere
Author: Vusumuzi Lindelwe
Date: 15/02/26
*/

#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define PI 3.14159

int main(void)
{

    double radius = 10.0;
    double volume;

    volume = (4.0 / 3.0) * PI * CUBE(radius);

    printf("Volume: %.2f\n", volume);

    return 0;
}