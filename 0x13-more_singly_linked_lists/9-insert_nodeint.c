#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at index
 * @head: a pointer to the pointer to the first node
 * @idx: index where the new node will be inserted
 * @n: integer to be added to the new node
 * Return: address to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
