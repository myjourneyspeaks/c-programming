# Introduction to C

C is a widely used programming language developed in the early 1970s. It is a by product of the UNIX operating system. 

- C is a low-level language
- C is a permissive language meaning C assumes you know what you are doing, so it allows you a wider degree of latitude than many languages.
- C is efficient, portable and it is a powerful language.
## Syntax

- `#include <stdio.h>` tells the compiler to include a **header file**. It is necessary to “_include_” information about C’s standard **I/O** library. The program’s executable goes inside the `main`, which represents the “_main_” program.
- `main()` is required as the program’s entry point. Without it, the program cannot link or execute.
- Any code inside the curly brackets `{}` will be executed.
- `printf()` is a function from the standard I/O library that can produce nicely formatted output.
- The `\n` code tells `printf()` to advance to the next line after printing the message.
- The line `return 0` indicates that the program “_returns_” the value 0 to the operating system when it terminates. When your program ends:
	- 0 = success
	- none-zero = error

## Compiling and Linking

First you have to save your files with `.c` file extension which is often required by compilers. For a C program to execute, it goes through three steps:

1. _Preprocessing_ - the program is first given a _preprocessor_, which obeys commands that begin with `#` (known as **directives**). A preprocessor is a bit like an editor; it can add things to the program and make modification.
2. _Compiling_ - The modified program now goes to a **compiler**, which translates it into machine instructions (**object code**).
3. _Linking_- a _linker_ combines the object code produced by the compiler with any additional code needed to yield a complete executable program.

## General Form

```c
// directives
int main(void){
// statements
}
```

- Even the simplest C programs rely on three key language features: _directives_, _functions_ and _statements_.

### Directives

 The program begins with:
 
```c
#include <stdio.h>
```

- `#include` is a preprocessor directive.
- This directive states that the information in `<stdio.h>` is to be “_included_” into the program before it is compiled.
- `<stdio.h>` contains information about C’s standard I/O library.
- The reason why we are including `<stdio.h>` is that C has no built-in “read” and “write” commands.
- Directives always begin with a `#` character. There’s no semicolon or other special marker at the end of a directive.

### Functions

### Statements

A statement is a command to be executed when the program runs. This program has only two kinds of statements:

- The `return` statement
- The other is the _function call_, for example, this program calls the `printf` function to display a string on the screen:

```c
printf("Hello, Internet!!!\n");
printf("I am learning C language");
```

⚠ C requires that each statement ends with a semicolon. The semicolon shows the compiler where the statement ends.

## Comments

Every program should contain identifying information: _the program name, the date written, the author, the purpose of the program and so forth._ In C, this information is placed in _comments_. There are two types of comments in C: 

- Inline comments - `// this is an inline comment`
- Multi-line comment - `/* This is a multi-line comment */`

Example:

```c
/*
 * Program: hello_internet.c
 * Purpose: Printing Hello interent!!!
 * Author: Vusumuzi Lindelwe
 * Date: 2026-01-25
 */
```

```c
// (void) tells the compiler no arguments are taken
```

## Additional notes

Empty parentheses in C (not C++), this:

```c
int main()
```

does not mean “no parameters”. It means “_I am not specifying the parameters_”. Morden C still accepts this, but its a bad style. The correct way to say “no parameters” is:

```c
int main(void)
```

## Keywords:

- **I/O** - input / output