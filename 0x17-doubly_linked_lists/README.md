# 0x17-doubly_linked_list

This project folder contains programs that illustrate an elementary introduction to Doubly Linked Lists in C

## Tasks

A brief overview of the programs in the project folder:

----

### Task 0

- A function that prints all the elements of a dlistint_t list
- File: 0-print_dlistint.c
- Prototype:

```c
size_t print_dlistint(const dlistint_t *h);
```

### Task 1

- A function that returns the number of elements in a linked dlistint_t list
- File: 1-dlistint_len.c
- Prototype:

```c
size_t dlistint_len(const dlistint_t *h);
```

### Task 2

- A function that adds a new node at the beginning of a dlistint_t list
- File: 2-add_dnodeint.c
- Prototype:

```c
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
```

### Task 3

- A a function that adds a new node at the end of a dlistint_t list.
- File: 3-add_dnodeint_end.c
- Prototype:

```c
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
```

### Task 4

- A function that frees a dlistint_t list.
- File: 4-free_dlistint.c
- Prototype:

```c
void free_dlistint(dlistint_t *head);
```

### Task 5

- A function that returns the nth node of a dlistint_t linked list
- File: 5-get_dnodeint.c
- Prototype:

```c
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
```

### Task 6

- A function that returns the sum of all the data (n) of a dlistint_t linked list
- File: 6-sum_dlistint.c
- Prototype:

```c
int sum_dlistint(dlistint_t *head);
```

### Task 7

- A function that inserts a new node at a given position.
- File: 7-insert_dnodeint.c
- Prototype:

```c
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
```

### Task 8

- A function that deletes the node at index index of a dlistint_t linked list
- File: 8-delete_dnodeint.c
- Prototype:

```c
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
```

### Task 10

- A file containing the largest palindrome formed from a product of two three digit numbers
- File: 102-result