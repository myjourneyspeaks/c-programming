# Notes on `fgets()`

`fgets()`

```c [!CAUTION]
fgets(item, sizeof(item), stdin);
```

- reads a full line of text
- allows spaces in input unlike `scanf()`
- stops when Enter is pressed
- stores the newline `\n`
- adds the null terminator `\0`

`fgets()` keeps the newline and newline causes messy output, hence this line removes it for clean output:

```c [!CAUTION]
item[strlen(item) - 1] = '\0';
```
