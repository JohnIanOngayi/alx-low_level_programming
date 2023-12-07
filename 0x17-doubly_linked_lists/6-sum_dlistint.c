#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: a pointer to the first node of the linked list
 * Return: a positive integer or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
