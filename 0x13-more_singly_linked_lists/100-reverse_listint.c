#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to the pointer to the first node of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *suc;
	listint_t *tmp;

	suc = NULL;
	tmp = NULL;
	while (*head != NULL)
	{
		suc = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = suc;
	}
	*head = tmp;
	return (*head);
}
