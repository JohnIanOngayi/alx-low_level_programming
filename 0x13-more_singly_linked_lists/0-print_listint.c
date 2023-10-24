#include "lists.h"
/**
 * print_listint - prints all the elements of a listint list
 * @h: a pointer to the first node of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	size_t num;

	ptr = NULL;
	num = 0;
	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		num++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (num);
}
