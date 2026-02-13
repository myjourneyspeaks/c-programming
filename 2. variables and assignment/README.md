# Variables and Assignment

Most programs need to perform a series of calculations before producing output, and thus need a way to store data temporarily during program execution. In C, these storage locations are called _variables_.

- A variable is a named location in memory that stores a value, and that value can change while the program runs.

## Types

Every variable must have a _type_, which specifies what kind of data it will hold. C has a wide variety of types. Choosing the proper type is critical, since the type affects how the variable is stored and what operations can be performed on the variable.

## Declarations

Variables must be declared before they can be used. To declare a variable, we must first specify the _type_ of the variable, then its _name_. For example":

```c
int height; // height is a variable of type int
float profit; // profit is a variable of type float
```

If several variables have the same type, their declaration can be combined:

```c
int height, length, width, volume;
float profit, loss;
```

On the introduction under general form, our `main` did not include declarations. When `main` contains declaration, these must precede statements:

```c
int main(void){
	// declarations
	// statements
}
```

## Assignment

A variable can be given a value by means of _assignment_. For example:

```c
int height = 8;
int length = 12;
int width = 10;
```

Since they all are related and have the same variable type, you can write like this:

```c
int height = 8, length = 12, width = 10;
```

assigns values to `height`, `length`, `width`. The numbers `8`, `12`, and `10` are said to be _constants_.

> Note: before a variable can be assigned a value, or used in any other way, it must first be declared.

A constant assigned to a `float` variable usually contains a decimal point, for example:

```c
float profit = 2150.48;
```

> Important: It is best to append the letter `f` (for “_float_”) to a constant that contains a decimal point if the number is assigned to a float variable:

```c
float profit = 2150.48f;
```

## Identifiers

As we are writing a program we will have to choose names for variables, functions, macros and other entities. These names are called _identifiers_. In C, an identifier may contain letters, digits, and underscores, but must begin with a letter or underscore. Example:

```c
int times10;
char get_next_char;
bool _done;
```

The following are not legal identifiers:

```c
int 10times;
char get-next-char;
```

C is _case sensitive_: it distinguishes between upper-case and lower-case letters in identifiers. For example:

```c
job joB jOb JOB JoB
```

these are all different.