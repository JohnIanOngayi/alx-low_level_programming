# 0x15 C File I/O

This project folder contains programs that use system calls to open, read, write, copy and close files in c.

## Tasks

A brief overview of the programs in this project folder:

----

### [Task 0](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x15-file_io/0-read_textfile.c)

- A function that reads a text file and prints it to the POSIX standard output
- File: 0-read_textfile.c
- Prototype:

```c
ssize_t read_textfile(const char *filename, size_t letters);
```

### [Task 1](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x15-file_io/1-create_file.c)

- A function creates a file and writes into it
- File: 1-create_file.c
- Prototype:

```c
int create_file(const char *filename, char *text_content);
```

### [Task 2](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x15-file_io/2-append_text_to_file.c)

- A function that appends text at the end of a file
- File: 2-append_text_to_file.c
- Prototype:

```c
int append_text_to_file(const char *filename, char *text_content);
```

### [Task 3](https://github.com/JohnIanOngayi/alx-low_level_programming/blob/master/0x15-file_io/3-cp.c)

- A program that copies the content of a file to another file.
- File: 3-cp.c
- Prototypes:

```c
int copier(int original, int duplicate);

int main(int argc, char *argv[]);
```
