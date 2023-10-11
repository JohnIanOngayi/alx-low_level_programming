# 0x0F-function_pointers

This project folder contains C files that illustrate the concept of function pointers

----

## Task 0

- A function that prints a name.
- File: 0-print_name.c
- Prototype:

```c
 void print_name(char *name, void (*f)(char *));
```

----

## Task 1

- A function that executes a function given as a parameter on each element of an array.
- File: 1-array_iterator.c
- Prototype:

```c
void array_iterator(int *array, size_t size, void (*action)(int));
```

----

## Task 2

- A function that searches for an integer.
- File: 2-int_index.c
- Prototype: 

```c
int int_index(int *array, int size, int (*cmp)(int));
```

----

## Task 3 

- A function that performs simple operations.
- Files: 
  - 3-calc.h
    Prototypes:

    ```c
    int op_add(int a, int b);
    int op_sub(int a, int b);
    int op_mul(int a, int b);
    int op_mul(int a, int b);
    int op_mod(int a, int b);
    ```

  - 3-get_op_func.c
    A function that selects the correct function to perform am operation asked by a user
    Prototype:

    ```c
    int (*get_op_func(char *s))(int, int);
    ```

  - 3-main.c
    Contains the main function

----
