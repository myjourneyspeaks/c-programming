#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, s, area = 0.0f;

  printf("enter the length of a: ");
  scanf("%f", &a);

  printf("enter the length of b: ");
  scanf("%f", &b);

  printf("enter the length of c: ");
  scanf("%f", &c);

  s = (a + b + c) / 2;

  area = sqrt(s * (s - a) * (s - b) * (s - c));

  printf("the area of the triangl is: %.2f", area);

  return 0;
}
