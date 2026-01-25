# Data Types in C

- `int` = whole numbers (4 bytes in modern systems)
- `float` = single-precision decimal number (4 bytes)
- `double` = double-precision decimal number (8 bytes)
- `char` = single character (1 byte)
- `char[]` = array of characters (size varies)

## `float` vs `double`

What is the difference?

| Type     | Typical Size | Precision     | Use case      |
| -------- | ------------ | ------------- | ------------- |
| `float`  | 4 bytes      | ~6-7 digits   | Saves memory  |
| `double` | 8 bytes      | ~15-17 digits | More accurate |

- **`double` is more precise** and is the _default_ for floating-point math in C.

Even if you write:

```c
float mark = 97.8;
```

C actually treats `97.8` as a **double literal** unless you write:

```c
float mark = 97.8f;
```

Also:

- `printf` promotes `float` → `double`
- Most math functions (`sqrt`, `pow`, etc.) use `double`

So professionals often just write:

```c
double mark = 97.8;
double price = 19.99;
```

When `float` _does_ make sense

Use `float` when:

- Memory is limited (embedded systems, microcontrollers)
- You need large arrays of numbers
- Slight precision loss is acceptable (graphics, sensors)

Correct `printf` formatting (important!)

For both `float` **and** `double`, use:

```c
printf("%.2f", value);
```

There is **no `%lf` in `printf`** (common mistake).

But for `scanf`:

```c
float x;
scanf("%f", &x);

double y;
scanf("%lf", &y);
```

Golden rule to remember 🧠

> **Use `double` by default. Use `float` only when you have a reason.**
