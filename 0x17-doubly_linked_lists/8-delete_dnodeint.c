#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index of a linked list
 * @head: pointer to the first node of the linked list
 * @index: index to delete
 * Return: 1 on success else -
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int pos;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp), tmp = NULL;
		return (1);
	}
	pos = 1, tmp = (*head)->next;
	if (tmp)
	{
		while (tmp->next)
		{
			if (index == pos)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
				free(tmp), tmp = NULL;
				return (1);
			}
			pos++, tmp = tmp->next;
		}
	}
	if (tmp && index == pos)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	return (-1);
}
