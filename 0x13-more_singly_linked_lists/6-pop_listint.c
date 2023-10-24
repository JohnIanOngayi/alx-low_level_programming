#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: a pointer to a pointer to the fast node
 * Return: int in data space of head node
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	num = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (num);
}
