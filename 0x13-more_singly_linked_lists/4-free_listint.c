#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
