#include <stdbool.h>
#include <stdio.h>

// Function Prototypes
void hello(char name[], int age);
bool ageCheck(int age);

// Main function
int main() {

  hello("Vusumuzi", 20);
  if (ageCheck(20)) {
    printf("\nYou are old enough to work at CHickeninn");
  } else {
    printf("\nYou must be 16+ to work at CHickeninn");
  }

  return 0;
}

// Functions
void hello(char name[], int age) {
  printf("Hello %s\n", name);
  printf("You are %d years old\n", age);
}

bool ageCheck(int age) { return age >= 16; }
