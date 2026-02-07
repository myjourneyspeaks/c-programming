#include <stdio.h>

int main(void) {
  // switch is an alternative to using many if-else statements
  //           more efficient with fixed integer values

  int dayOfWeek = 0;
  printf("Enter a day of the week (1 - 7): ");
  scanf("%d", &dayOfWeek);

  switch (dayOfWeek) {
  case 1:
    printf("It is Monday");
    break;
  case 2:
    printf("It is Tuesday");
  case 3:
    printf("It is Wednesday");
    break;
  case 4:
    printf("It is Thursday");
    break;
  case 5:
    printf("It is Friday");
  case 6:
    printf("It is Saturday");
    break;
  case 7:
    printf("It is Sunday");
    break;
  default:
    printf("Please only enter number (0 - 7) ");
  }

  return 0;
}
