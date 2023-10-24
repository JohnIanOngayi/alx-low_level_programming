#include "lists.h"
/**
 * sum_listint - sums all the data of a list
 * @head: pointer to the first node
 * Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int count;

	if (head == NULL)
		return (0);
	ptr = NULL;
	count = 0;
	ptr = head;
	while (ptr != NULL)
	{
		count += (ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
