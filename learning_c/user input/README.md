# User Input

## Error 1

```c
// Enter your garde
prinf("Enter your grade: ");
scanf(" %c, &grade");
```

> The reason why there's white space in our `scanf()` function is because we are telling our compiler to ignore rather not assign new line and append it to grade variable. The compiler will just skip not allowing you to assign a value.

## Error 2

```c
// Enter your name
prinf("What is your full name: ");
scanf("%s", name);
```

> If you enter your full name, `scanf()` will only assign your first name and ignores your last name because of white space. `scanf()` function does not read white space, it stops when it encounters white space.

> Solution is to use `fgets()` function which means "File Get String"

## The rule

When you have:

```c
char name[30];
```

And you use `scanf` to read a string, you **should** write:

```c
scanf("%29s", name);
```

### Why `%29s` and not `%30s`?

- `name` has space for **30 characters total**
- One of those is reserved for the **null terminator** `'\0'`
- So you may safely read **at most 29 characters**

```
29 characters + '\0' = 30 bytes
```

That’s why `%29s` is correct and professional.

Initialization has **nothing** to do with the width limit.

The width limit depends **only on the array size**.

## What happens if you don’t use `%29s`?

If you write:

```c
scanf("%s", name);
```

And the user types a long name → **buffer overflow**
This is one of the classic C bugs.

That’s why professionals _always_ add a width.

## General pattern

```c
char buffer[N];
scanf("%(N-1)s", buffer);
```

Examples:

```c
char city[50];     → scanf("%49s", city);
char id[10];       → scanf("%9s", id);
char name[30];     → scanf("%29s", name);
```

## One small real-world note (future you)

`scanf("%s")` stops at whitespace, so:

- `"John"` ✅
- `"John Doe"` ❌ (reads only `John`)
