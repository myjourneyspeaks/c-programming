#include <stdio.h>

int main() {

  // Format specifer = Special tokens that begin with a % symbol,
  //                   followd by a character that specifies the data type
  //                   and optional modifiers (width, precision, flags).
  //                   They control how data is displayed or interpreted.

  /* int age = 23;
  float price = 900.50;
  double randNum = 90.48377493;
  char currency = '$';
  char name[] = "Vusumuzi Lindelwe";
  char surname[] = "Khumalo";

  printf("\nName: %s\n", name);
  printf("Surname: %s\n", surname);
  printf("Aged: %d\n", age);
  printf("Networth: %c %.2f\n", currency, price);
  printf("Fun level: %lf\n", randNum);*/

  // ========== Width ============

  /* int num1 = 1;
   int num2 = 10;
   int num3 = 500; */

  /* int num1 = 1;
  int num2 = 10;
  int num3 = -500; */

  /* printf("%4d\n", num1);
  printf("%4d\n", num2);
  printf("%4d\n", num3);*/

  /* printf("%-4d\n", num1);
  printf("%-4d\n", num2);
  printf("%-4d\n", num3);*/

  /* printf("%04d\n", num1);
   printf("%04d\n", num2);
   printf("%04d\n", num3); */

  /* printf("%+d\n", num1);
   printf("%+d\n", num2);
   printf("%+d\n", num3);*/

  // ========= Precision ===============

  float price1 = 20.99;
  float price2 = 1.99;
  float price3 = -100.00;
  char symbol = '$';

  printf("\n%c %7.2f\n", symbol, price1);
  printf("%c %7.2f\n", symbol, price2);
  printf("%c %7.2f\n", symbol, price3);

  return 0;
}
