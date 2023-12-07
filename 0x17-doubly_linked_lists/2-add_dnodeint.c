#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginnig of a doubly linked list
 * @head: a pointer to the pointer to the first node of the list
 * @n: the integer to be added to the data space of the new node
 * Return: a pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}
