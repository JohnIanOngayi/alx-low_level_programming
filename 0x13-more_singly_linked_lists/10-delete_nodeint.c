#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *ptr;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
	}

	ptr = tmp->next;
	tmp->next = ptr->next;
	free(ptr);
	return (1);
}
