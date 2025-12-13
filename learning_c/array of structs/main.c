#include <stdio.h>

typedef struct {
  char model[25];
  int year;
  int price;

} Car;

int main() {

  // array of structs = Array where each element contains a struct {}
  //                    Helps organize and groups together related data

  Car cars[] = {
      {"BMW", 2025, 43000},
      {"Challenger", 2022, 68000},
      {"Rolls Royce", 2020, 1200000},
  };

  int number = sizeof(cars) / sizeof(cars[0]);

  for (int i = 0; i < number; i++) {
    printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
  }

  return 0;
}
