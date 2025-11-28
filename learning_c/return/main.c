#include <stdbool.h>
#include <stdio.h>

// square function
double square(double num) { return num * num; }

// cube function
double cube(double num) { return num * num * num; }

// age check function
bool ageCheck(int age) {
  if (age >= 18) {
    return true;
  } else {
    return false;
  }
}

// number comparison function
int getMax(int f, int h) {
  if (f >= h) {
    return f;
  } else {
    return h;
  }
}

int main() {

  // return = returns a value back to where you call a function

  double i = cube(2);
  double j = cube(3);
  double x = square(2.4);
  double y = square(3.5);
  double z = square(4.7);
  int age = 17;

  printf("%.2lf\n", x);
  printf("%.2lf\n", y);
  printf("%.2lf\n", z);
  printf("\n%.2lf\n", i);
  printf("%.2lf\n", j);

  if (ageCheck(age)) {
    printf("\nYou may sign up");
  } else {
    printf("\nYou must be 18+ to sign up\n");
  }

  int max = getMax(3, 4);
  printf("\n%d\n", max);

  return 0;
}
