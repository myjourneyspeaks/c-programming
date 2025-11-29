#include <math.h>
#include <stdio.h>

int main() {

  // Q: Write a program to calculate compound interest
  double principle = 0.0;
  double rate = 0.0;
  double time = 0.0;
  double interest = 0.0;

  printf("Compound Interest Calculator (Anually)\n");

  printf("Enter Principle: ");
  scanf("%lf", &principle);

  printf("Enter Rate: ");
  scanf("%lf", &rate);

  printf("Enter Time: ");
  scanf("%lf", &time);

  // Formulae
  interest = principle * ((pow((1 + rate / 100), time)));

  printf("Compound Interest = %.2lf", interest);

  return 0;
}
