# The `printf` Function

The `printf` function is designed to display the contents of a string, known as the **format string**, with values possibly inserted at specified points in the string. When it is called, `printf` must be supplied with the format string, followed by any values that are to be inserted into the string during printing:

```c
printf(string, expr1, expr2, ...);
```

There is no limit on the number of values that can be printed by a single call of `printf`. 

The format string may contain both ordinary characters and _conversion specifications_, which begin with the `%` character. A _conversion specification_ is a placeholder representing a value to be filled in during printing. The information that follows the `%` character specifies how the value is _converted_ from its internal form (binary) to printed form (characters).

Example: the conversion specification `%d` specifies that `printf` is to convert an `int` value from binary to a string of decimal digits, while `%f` does the same thing for a `float` value.

## Conversion Specifications

Conversion specifications give the programmer a great deal of control over the appearance of output. A conversion specification can have the form `%m.pX` or `%-m.pX` where:

- `m` and `p` are integer constants and `X` is a letter

