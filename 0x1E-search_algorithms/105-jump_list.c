#include "search_algos.h"

/**
 * jump_list - jump searches a singly linked list
 * @list: pointer to head of linked list
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = list, *tmp = list;
	size_t index = 0;
	size_t i = 0;

	if (!list || size == 0)
		return (NULL);
	while (tmp->next && tmp->n < value)
	{
		prev = tmp;
		for (i = 0; i < step && tmp->next; i++)
		{
			tmp = tmp->next;
			index++;
		}
		printf("Value checked at index [%lu] = [%d]\n", index, tmp->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", index - step, index);

	while (prev && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", index - step, prev->n);
		prev = prev->next;
		step--;
	}

	if (prev && prev->n == value)
	{
		printf("Value found at index [%lu] = [%d]\n", index - step, prev->n);
		return (prev);
	}

	return (NULL);
}
