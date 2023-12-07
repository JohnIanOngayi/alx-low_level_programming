#include "lists.h"

/**
 * get_dnodeint_at_index - returns the address of an indexed node
 * @head: a pointer to the first node of the linked list
 * @index: index of the desired node
 * Return: address of the n-th node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int pos = 0;

	if (!head)
		return (NULL);

	ptr = head;
	while (index >= pos && ptr)
	{
		if (index == pos)
			return (ptr);
		ptr = ptr->next;
		pos++;
	}

	return (NULL);
}
