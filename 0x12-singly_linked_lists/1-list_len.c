#include "lists.h"

/**
 * list_len - Determines the number of elements in a linked list
 * @h: pointer to the first node of the list
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	list_t *ptr;
	size_t num;

	num = 0;
	ptr = (list_t *)h;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
