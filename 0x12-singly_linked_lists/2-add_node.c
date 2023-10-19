#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: a pointer to the first node of the linked list.
 * @str: string to be copied to the dataspace of the new node
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
