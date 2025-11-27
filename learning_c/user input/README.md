# User Input

## Error 1

```c
// Enter your garde
prinf("Enter your grade: ");
scanf(" %c, &grade");
```

> The reason why there's white space in our scanf() function is because we are telling our compiler to ignore rather not assign new line and append it to grade variable. The compiler will just skip not allowing you to assign a value.

## Error 2

```c
// Enter your name
prinf("What is your full name: ");
scanf("%s", name);
```

> If you enter your full name, scanf() will only assign your first name and ignores your last name because of whitespace. scanf() function does not read whitespace, it stops when it encounters whitespace.

> Solution is to use fgets() function which means "File Get String"
