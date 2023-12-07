#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly linked list
 * @h: a pointer to the first node in the linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *ptr = NULL;

	ptr = (dlistint_t *)h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}

