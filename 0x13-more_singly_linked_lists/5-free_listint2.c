#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: poiinter to the head of the linked list.
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	tmp = NULL;
	*head = NULL;
	head = NULL;
}
