# Singly Linked Lists 🔗

This repository contains programs that illustrate the elementary applications and functionality of linked lists data structure.

## Tasks

----

### Task 0

A function that prints the elements of a list

- File: 0-print_list.c
- Prototype:

```c
size_t print_list(const list_t *h);
```

----

### Task 1

A function that returns the number of elements in a list

- File: 1-list_len.c
- Prototype:

```c
size_t list_len(const list_t *h);
```

----

### Task 2

A function that adds a new node at the beginning of a list

- File: 2-add_node.c
- Prototype:

```c
list_t *add_node(list_t **head, const char *str);
```

----

### Task 3

A function that adds a new node at the end of a list

- File: 3-add_node_end.c
- Prototype:

```c
list_t *add_node_end(list_t **head, const char *str);
```

----

### Task 4

A function that frees a list

- File: 4-free_list.c
- Prototype:

```c
void free_list(list_t *head);
```

----

### Task 5

A function that executes before main

- File: 100-first.c
- Code:

```c
void before_main() __attribuute__ ((constructor));
void before_main()
{
    /*
     * Code to be executed
     */
}
```