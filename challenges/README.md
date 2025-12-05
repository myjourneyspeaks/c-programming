# Challenge Directory

## Overview

This directory contains a collection of c language challenges I found on the internet and books I read. This **README** serves as a guide and summary of all challenges, including their questions, requirements and **notes**.

All challenges were developed and tested on **Linux (Ubuntu)** using the **GCC complier** and Lazy Vim as my primary code editor.

## How to Run/Review Each Challenge (Ubuntu + GCC)

To compile and run any challenge, use the following commands in the terminal:

```bash
cd 'challenge 1' # navigate to the challenge 1 directory
./build.sh && main # type this command to run main.c
```

For other challenges:

```bash
cd 'challenge x' # replace X with the challenge number
./build.sh && main # type this command to run main.c
```

## Challenge 1

Question:

- Given a = 5, x = 1, and y = 5, create a C program that outputs the result of the formula:
  f = (a − x)(x − y).

Goal / Requirements:

- Declare the variables a, x, y, and f.
- Apply the formula f = (a - x) \* (x - y).
- Print the values of a, x, y, and the result f.

Notes:

- Ensure that integer arithmetic is used.
- The challenge focuses on applying a formula using basic variables and operators.

## Challenge 2

Question:

- Create a C program that prompts the user for their name, stores the input, and returns a greeting using the name provided.

Goal / Requirements:

- Declare a character array to store the user’s name.
- Prompt the user to enter their name.
- Use `fgets()` (or `scanf()` as the original challenge states) to read the user’s input.
- Remove the newline character from the input.
- Print a greeting message that includes the user’s name.

Notes:

- This challenge focuses on user input, string handling, and basic output.
- `fgets()` is safer than `scanf("%s", ...)` for reading strings with spaces.
- `strlen()` is used to remove the trailing newline from `fgets()`.

## Challenge 3

Question:

- Create a C program that prompts the user for a price and a quantity, then calculates and displays the total revenue using the formula: Total Revenue = Price × Quantity.

Goal / Requirements:

- Declare variables for price, quantity, and total_revenue.
- Prompt the user to enter the price of a T-shirt.
- Prompt the user to enter the quantity.
- Use the formula total_revenue = price \* quantity.
- Display the result with two decimal places and include a currency symbol.

Notes:

- `scanf()` is used to read both float and integer inputs.
- The program stores the currency symbol ($) in a character variable for formatting.
- This challenge focuses on user input, basic arithmetic, and formatted output.

## Challenge 4

Question:

- Create a C program that prompts the user for sales data and calculates commission using the formula: Commission = Rate × (Sale Price − Cost).

Goal / Requirements:

- Prompt the user to enter the Sale Price, Cost, and Rate.
- Use the formula commission = rate \* (sale_price - cost).
- Display the Sale Price, Cost, Rate, and Total Commission with proper formatting.
- Show monetary values with two decimal places and include a currency symbol.

Notes:

- This challenge reinforces user input, float arithmetic, and string formatting.
- %% is used inside `printf` to display a literal % symbol.
- Alignment spacing (e.g., %8c) is used to produce clean, structured output.

## Challenge 5

Question:

- Create a C program that prompts the user for the lengths of a triangle’s three sides, then calculates its area using Heron's Formula:
  - First compute the semi-perimeter: s = (a + b + c) / 2
  - Then compute the area: Area = √(s × (s − a) × (s − b) × (s − c))

Goal / Requirements:

- Prompt the user to enter the lengths of sides a, b, and c.
- Calculate the semi-perimeter s.
- Implement a function `areaofTriangle()` that returns the area using Heron's Formula.
- Display the final area with two decimal places.

Notes:

- Requires math.h to use the sqrt() function.
- Demonstrates functions, floating-point arithmetic, and formula implementation.
- The calculation is done inside a separate function for modularity and clarity.

## Challenge 6

Question:

- Write a C program that prompts the user to enter two numbers and then calculates and displays their sum.

Goal / Requirements:

- Prompt the user to enter two integers.
- Create a sum() function that takes two integers and returns their sum.
- Call the function and store the result.
- Print the final sum.

Notes:

- This challenge introduces functions that return values.
- Demonstrates basic integer input, function usage, and arithmetic.
- Function prototype is declared before main() for clarity.

## Challenge 7

Question:

- Write a C program that swaps the values of two variables.

Goal / Requirements:

- Declare two integer variables with initial values.
- Use a temporary variable (temp) to swap the values of a and b.
- Print the swapped results.

Notes:

- Demonstrates the classic value-swapping technique using a temporary variable.
- Reinforces variable assignment and basic output formatting.
- No user input is required for this challenge.
