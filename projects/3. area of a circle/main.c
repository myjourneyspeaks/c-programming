/*
 * Program: calRadius.c
 * Purpose: Calcualting the radius of a circle
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-27
 */

#include <math.h>
#include <stdio.h>

#define PI 3.14159

int main(void) {

  double radius = 0.0;
  double area = 0.0;
  double surfaceArea = 0.0;
  double volume = 0.0;

  printf("Enter the radius: ");
  scanf("%lf", &radius);

  // formula
  area = PI * pow(radius, 2);
  surfaceArea = 4 * PI * pow(radius, 2);
  volume = (4.0 / 3.0) * PI * pow(radius, 3);

  printf("Area: %.2f\n", area);
  printf("Surface Area: %.2f\n", surfaceArea);
  printf("Volume: %.2f", volume);

  return 0;
}
