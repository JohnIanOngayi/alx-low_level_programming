#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: a pointer to the pointer to the first node
 * @n: the integer to be added to the data space of the new node
 * Return: an address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = NULL;
	tmp = NULL;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
