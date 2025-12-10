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

## Challenge 8

Question:

- Write a C program to calculate compound interest using the formula:
  A = P × (1 + r/100), were here:
  - P = Principal Amount
  - r = Annual interest rate
  - t = Time in years
  - A = Amount after compound interest

Goal / Requirements:

- Prompt the user to enter the Principal, Rate, and Time.
- Use the pow() function from math.h to compute compound interest.
- Calculate the final amount using:
  - interest = principle \* pow((1 + rate / 100), time)
- Display the result with two decimal places.

Notes:

- Requires including math.h for the pow() function.
- Uses double to ensure accurate calculations for financial values.
- Reinforces user input, mathematical operations, and output formatting.

## Challenge 9

Question:

- Write a C program to check whether a given number is Even or Odd. Implement the solution using two different methods:
  - Using the modulus operator (%)
  - Using bitwise operations (&)

Goal / Requirements:

- Create a function checkOddEven() that:
  - Takes an integer
  - Uses n % 2 to determine if it's even or odd
  - Prints "Even" or "Odd"
  - Create a second function bitcheckOddEven() that:
  - Takes an integer
  - Uses the expression z & 1 to check the least significant bit
  - Prints "Even" or "Odd"
  - Call both functions in main() using sample numbers.

Notes:

- Demonstrates two approaches to solving the same problem.
- `% 2 == 0` checks divisibility, while & 1 checks the binary least significant bit.
- Useful for understanding arithmetic vs. bitwise logic.

## Challenge 10

Question:

- Write a C program to find the largest number among three given numbers.

Goal / Requirements:

- Create a function `numCompare()` that accepts three integers.
- Use conditional statements (if, else if, else) to compare the values.
- Determine which number is the largest (including handling equal values).
- Print the largest number.

Notes:

- Uses the logical AND operator (&&) to compare multiple conditions.
- Handles cases where numbers are equal by using >= comparisons.
- Demonstrates function usage, conditional logic, and comparison operators.

## Challenge 11

Question:

- Write a C program to find the factorial of a given number using a recursive function.

Goal / Requirements:

- Prompt the user to enter any whole number.
- Implement a function `calfactorial()` that:
- Uses recursion
- Returns 1 when `n == 0` (base case)
- Otherwise returns `n * calfactorial(n - 1)`.
- Print the calculated factorial.

Notes:

- Demonstrates recursion, a key programming concept.
- Factorial of 0 is defined as 1.
- The function multiplies downward until the base case is reached.
- Works well for small integers; factorials grow very fast for large numbers.

## Challenge 12

Question:

- Write a C program that converts a binary number (entered digit-by-digit by the user) into its decimal equivalent.

Goal / Requirements:

- Ask the user for the size (number of bits) using a function sizeNumber().
- Store each binary digit in an array.
- Validate that each input is either 0 or 1.
- Convert the binary digits into a decimal value using the formula:
  - `decimal += binary[i] × 2^(position)`
- Display the decimal result.

Notes:

- Uses pow() from math.h for calculating powers of 2.
- Stores binary digits in an integer array of size 64.
- The loop power = size − 1 − i ensures correct positional value for binary digits.
- Includes simple binary validation to detect non-binary values.
- Demonstrates arrays, loops, validation, functions, and binary number conversion.

## Challenge 13

Question:

- Write a C program to print the Fibonacci series using recursion.

Goal / Requirements:

- Prompt the user to enter how many Fibonacci numbers to generate.
- Implement a recursive function fibonacci(n) that:
  - Returns 0 when n == 0
  - Returns 1 when n == 1
- Otherwise returns fibonacci(n − 1) + fibonacci(n − 2)
- Use a loop in main() to print each Fibonacci number in sequence.

Notes:

- This challenge highlights recursive computation of the Fibonacci sequence.
- Begins counting from fibonacci(0) upward.
- Recursive Fibonacci grows in time complexity very quickly (O(2ⁿ)), but works fine for small values.
- Demonstrates loops, function calls, and recursive patterns.
