#include <stdio.h>
#include <unistd.h>

int main() {

  // for loop repeats some code a limited number of time
  //          for(Initialization; Condition; update)

  for (int i = 10; i >= 0; i--) {
    sleep(1);
    printf("%d\n", i);
  }

  sleep(1);
  printf("Happy New Year");

  return 0;
}
