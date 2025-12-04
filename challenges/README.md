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
