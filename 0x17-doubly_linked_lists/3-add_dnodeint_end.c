#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the beginnig of a doubly linked list
 * @head: a pointer to the pointer to the first node of the list
 * @n: the integer to be added to the data space of the new node
 * Return: a pointer to the new node or NULL for failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (head == NULL || *head == NULL)
	{
		*head = new;
		return (new);
	}

	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;

	new->prev = ptr;
	ptr->next = new;

	return (new);
}
