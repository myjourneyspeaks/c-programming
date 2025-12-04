# Challenge 1 Documentation

I made a mistake by assigning '\0' to my variable with int data type. Instead of doing this:

```c
  int a = '\0';
  int x = '\0';
  int y = '\0';
  int f = '\0';

```

Do this instead:

```c
  int a = 0;
  int x = 0;
  int y = 0;
  int f = 0;
```

For variables with int data type makes more sense to assign the value of 0 than null. Only use null for variables with char data type.
