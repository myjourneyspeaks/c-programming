/*
Program: vsphere.c
Purpose: Computes the Volume of a Sphere
Author: Vusumuzi Lindelwe
Date: 15/02/26
*/

#include <stdio.h>

#define PI 3.14159
#define CUBE(x) ((x) * (x) * (x))

int main(void)
{

    double radius;
    double volume;

    printf("Enter Radius: ");
    scanf("%lf", &radius);

    volume = (4.0 / 3.0) * PI * CUBE(radius);

    printf("Volume of the Sphere is: %.2f\n", volume);

    return 0;
}
