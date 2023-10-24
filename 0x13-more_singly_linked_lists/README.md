# 0x13-more_singly_linked_lists

In this project folder we learned more on algorithms and data structures by writing more manipulation programs on singly linked lists

## Tasks

A brief overview of the programs in thisproject folder:

----

### [Task 0]()

- A function that prints all the elements of a list
- File: 0-print_listint.c
- Prototype:

```c
size_t print_listint(const listint_t *h);
```

### [Task 1]()

- A function that returns the number of elements in a list
- File: 1-listint_len.c
- Prototype:

```c
size_t listint_len(const listint_t *h);
```

### [Task 2]()

- A function that adds a new node at the beginning of a list
- File: 2-add_nodeint.c
- Prototype:

```c
listint_t *add_nodeint(listint_t **head, const int n);
```

### [Task 3]()

- A function that adds a new node at the end of a list
- File: 3-add_nodeint_end.c
- Prototype:

```c
listint_t *add_nodeint_end(listint_t **head, const int n);
```

### [Task 4]()

- A function that frees a list
- File: 4-free_listint.c
- Prototype:

```c
void free_listint(listint_t *head);
```

### [Task 5]()

- A function that frees a list and sets the head to null
- File: 5-free_listint2.c
- Prototype:

```c
void free_listint2(listint_t **head);
```

### [Task 6]()

- A function that deletes the head node of a list and returns the new head node of the same list
- File: 6-pop_listint.c
- Prototype:

```c
int pop_listint(listint_t **head);
```

### [Task 7]()

- A function that returns the nth node of a linked list
- File: 7-get_nodeint.c
- Prototype:

```c
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```

### [Task 8]()

- A function that returns the sum of all the data in a linked list
- File: 8-sum_listint.c
- Prototype:

```c
int sum_listint(listint_t *head);
```

### [Task 9]()

- A function that inserts a new node at a given position
- File: 9-insert_nodeint.c
- Prototype:

```c
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```

### [Task 10]()

- A function that deletes a node at a given index
- File: 10-delete_nodeint.c
- Prototype:

```c
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```

### [Task 11]()

- A function that reverses a list
- File: 1000-reverse_listint.c
- Prototype:

```c
listint_t *reverse_listint(listint_t **head);
```

### [Task 12]()

- A function that prints a list
- File: 101-print_listint_safe.c
- Prototype:

```c
size_t print_listint_safe(const listint_t *head);
```

### [Task 13]()

- A function that frees a linked list
- File: 102-free_listint_safe.c
- Prototype:

```c
size_t free_listint_safe(listint_t **h);
```

### [Task 14]()

- A function that finds the loop ina linked list
- File: 103-find_loop.c
- Prototype:

```c
listint_t *find_listint_loop(listint_t *head);
```
