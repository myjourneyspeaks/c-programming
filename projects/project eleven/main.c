#include <stdio.h>

// prototypes
void checkBalance(float balance);
float depost();
float withdraw(float balance);

int main() {

  // BANKING PROGRAM

  int choice = 0;
  float balance = 0.0f;

  printf("***** WELCOME TO THE BANK *****\n");

  do {

    printf("\nSelect an option:\n");
    printf("\n1. Check Balance\n");
    printf("2. Deposite Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("\nEnter your choice\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      checkBalance(balance);
      break;
    case 2:
      balance += depost();
      break;
    case 3:
      balance -= withdraw(balance);
      break;
    case 4:
      printf("\nThank you for using the bank!\n");
      break;
    default:
      printf("\nInvalid choice!!! Please select 1 - 4\n");
    }

  } while (choice != 4);

  return 0;
}

// check balance function
void checkBalance(float balance) {
  printf("\nYour current balance is: $%.2f\n", balance);
}

// deposit function
float depost() {

  float amount = 0.0f;

  printf("\nEnter amount to deposit: $");
  scanf("%f", &amount);

  if (amount < 0) {
    printf("Invalid amount\n");
    return 0.0f;
  } else {
    printf("Successfully deposited $%.2f\n", amount);
    return amount;
  }
}

// withdraw function
float withdraw(float balance) {

  float amount = 0.0f;

  printf("\n Enter amount to withdraw: $");
  scanf("%f", &amount);

  if (amount < 0) {
    printf("Invalid Amount!\n");
    return 0.0f;
  } else if (amount > balance) {
    printf("Insufficient funds! Your balance is $%.2f\n", balance);
    return 0.0f;
  } else {
    printf("Sucessfully withdraw $%.2f\n", amount);
    return amount;
  }

  return 0.0f;
}
