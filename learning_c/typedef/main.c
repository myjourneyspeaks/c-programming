#include <stdio.h>

typedef int Number;
typedef char String[50];

int main() {

  // typedef = reserved keyword that gives an existing datatype a "nickname"
  //           Helps simplify complex types and improve code readability

  //           typedef existing_type new_name

  Number x = 8;
  Number y = 7;
  Number z = x + y;

  printf("%d", z);

  String name = "Vusumuzi Lindelwe";
  printf("\n%s", name);

  return 0;
}
