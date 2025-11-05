#include <stdbool.h> // To work with boolean Datatype use this header file. it means standard boolean
#include <stdio.h>

int main() {
  // variable is a named storage location in the computer's memory that holds a
  // value which can change during execution. it behaves as if were the value it
  // contains

  // ============== Interger Datatype ================
  // intergers are whole numbers that represent positive and negative numbers
  // such as -3, -2, 1, 9, 10. integers hold a maximum if 4 bytes of
  // information.

  /* int age = 23;
  int year = 2025;
  int quantity = 35;

  printf("You are %d years old\n", age);
  printf("This year is %d\n", year);
  printf("Your quantiry %d\n", quantity); */

  // ============= Float Datatype =====================
  // floating-point numbers are all numbers including signed and unsigned
  // decimal and fractional size numbers such as 0.9, 78.99, -99.76.

  /* float mark = 97.8;
  float price = 19.99;

  printf("You got %.2f%%\n", mark);
  printf("At wendy's icecream, icecream cost $%.2f\n", price); */

  // ============ Double Datatype ======================
  // double stores fractional numbers, containing one or more decimals. 8 byte
  // of memory.

  /* double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e); */

  // =========== Char Datatype ========================
  // char data type stores a single character/letter/numner or ASCLL values.

  /* char grade = 'A';
  char symbol = '!';
  char currency = '$';

  printf("Your grade is %c\n", grade);
  printf("Your favourite symbol is %c\n", symbol);
  printf("Your currency symbol is %c\n", currency); */

  // ============ String Datatype =====================
  // char[] - array of characters

  /* char name[] = "Vusumuzi Lindelwe";
  char food[] = "Pizza";
  char email[] = "example123@gmail.com";

  printf("Hi %s\n", name);
  printf("Your favourite food is %s\n", food);
  printf("Lastly your email is %s\n", email);*/

  // ============= Boolean Datatype ==================

  bool isOnline = true;
  bool isStudent = true;
  bool isMarried = false;
  bool forSell = false;

  if (isOnline) {
    printf("YOu are online\n");
  } else {
    printf("You are offline\n");
  }

  if (isStudent) {
    printf("You are a student\n");
  } else {
    printf("You are not a student\n");
  }

  if (isMarried) {
    printf("Congradulation to your happy marriage\n");
  } else {
    printf("When are you getting married?\n");
  }

  if (forSell) {
    printf("Yes this item is for sell\n");
  } else {
    printf("I cant sell you this item\n");
  }

  // == Summary ==

  // int = whole numbers (4 bytes in morden systems)
  // float = single-precision decimal number (4 bytes)
  // double = double-precesion decimal number (8 bytes)
  // char = single character (1 byte)
  // char[] = array of characters (size varies)
  // bool = true or false (1 byte, requires <stdbool.h>)

  return 0;
}
