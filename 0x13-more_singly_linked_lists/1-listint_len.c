#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the first node
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *ptr;
	size_t num;

	ptr = NULL;
	num = 0;
	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
