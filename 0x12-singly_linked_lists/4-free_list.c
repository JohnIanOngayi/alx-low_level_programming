#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *end;

	while (head != NULL)
	{
		end = head;
		head = head->next;
		free(end->str);
		free(end);
	}
}
