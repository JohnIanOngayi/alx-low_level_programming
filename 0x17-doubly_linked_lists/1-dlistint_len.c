#include "lists.h"

/**
 * dlistint_len - counts all elements in a doubly linked list
 * @h: a pointer to the first node in the linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *ptr = NULL;

	ptr = (dlistint_t *)h;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

