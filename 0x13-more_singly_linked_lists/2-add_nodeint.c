#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer to the pointer to the first node
 * @n: the integer to be added tio the data space of the inserted node
 * Return: address to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	if (*head)
		ptr->next = *head;
	ptr->n = n;
	*head = ptr;
	return (ptr);
}
