/* Program that computes the volume of a sphere */

#include <math.h>
#include <stdio.h>

// constants
#define PI 3.14159265

int main(void)
{

  float volume = 0.0f;
  int radius = 10;

  // fomulae
  radius = pow(radius, 3);
  volume = (4.0f / 3.0f) * PI * radius;

  printf("\nThe volume of a 10-meter radius is: %.2f", volume);

  return 0;
}
