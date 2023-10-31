# 0x14-bit_manipulation

This repository folder contains programs written as an elementary introduction to bit manipulation in C

## Tasks

A brief overview of the programs contained in this project folder:

----

### [Task 0](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c)

- A function that converts a binary number to an unsigned int
- File: 0-binary_to_uint.c
- Prototype:

```c
unsigned int binary_to_uint(const char *b);
```

### [Task 1](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x14-bit_manipulation/1-print_binary.c)

- A  function that prints the binary representation of a number
- File: 1-print_binary.c
- Prototype:

```c
void print_binary(unsigned long int n);
```

### [Task 2](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x14-bit_manipulation/2-get_bit.c)

- A function that returns the value of a bit at a given index
- File: 2-get_bit.c
- Prototype:

```c
int get_bit(unsigned long int n, unsigned int index);
```

### [Task 3](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x14-bit_manipulation/3-set_bit.c)

- A function that sets the value of a bit to 1 at a given index
- File: 3-set_bit.c
- Prototype:

```c
int set_bit(unsigned long int *n, unsigned int index);
```

### [Task 4](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x14-bit_manipulation/4-clear_bit.c)

- A function that sets the value of a bit to 0 at a given index
- File: 4-clear_bit.c
- Prototype:

```c
int clear_bit(unsigned long int *n, unsigned int index);
```

### [Task 5](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x14-bit_manipulation/5-flip_bits.c)

- A function that returns the number of bits you would need to flip to get from one number to another
- File: 5-flip_bits.c
- Prototype:

```c
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```

### [Task 6](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x14-bit_manipulation/100-get_endianness.c)

- A function that checks the endianness
- File: 100-get_endianness.c
- Prototype:

```c
int get_endianness(void);
```
