#include "lists.h"
/**
 * get_nodeint_at_index - returns the address of the nth node of
 * @index: the index of the node
 * @head: pointer to the first node ogf the list
 * Return: the address of the node or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	ptr = head;
	count = 0;
	while (ptr != NULL && count < index)
	{
		count++;
		ptr = ptr->next;
	}
	return (ptr);

}
