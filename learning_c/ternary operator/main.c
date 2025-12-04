#include <stdbool.h>
#include <stdio.h>

int main() {

  // ternary operator ? = shorthand for if-else statements

  // (condition) ? value_if_true : value_if_false

  // This compares the 2 values and returns the bigger one
  // int x = 5;
  // int y = 6;
  // int max = (x > y) ? x : y;
  //
  // printf("%d", max);

  // bool isOnline = true;
  //
  // printf("%s", (isOnline) ? "Online" : "Offline");

  // int number = 9;
  //
  // printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");

  // int age = 21;
  //
  // printf("%s", (age > 18) ? "adult" : "child");

  int hours = 12;
  int minues = 4;
  char *meridiem = (hours < 12) ? "AM" : "PM";

  printf("%02d:%02d %s", hours, minues, meridiem);

  return 0;
}
