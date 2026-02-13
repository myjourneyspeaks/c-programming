# Defining Constants

When a program contains constants, it is a good idea to give them names. Using a feature known as “_macro definition_”, we can name constants:

```c
#define INCHES_PER_POUND
```

- `#define` is a preprocessing directive, just as `#include` is.
- When a program is compiled, the preprocessor replaces each macro by the value that it represents for example:

```c
weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
```

will become:

```c
weight = (volume + 166 - 1) / 166;
```

The value if a macro can be an expression":

```c
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)
```

- If it contains operators, the expression should be enclosed in parentheses.
