#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: a pointer to the first node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;
	dlistint_t *nex = NULL;

	ptr = head;
	while (ptr)
	{
		nex = ptr->next;
		free(ptr);
		ptr = nex;
	}
}
