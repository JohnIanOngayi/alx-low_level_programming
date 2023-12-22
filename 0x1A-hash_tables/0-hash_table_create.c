#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: the size of the array
 * Return: a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *info = NULL;
	hash_node_t **table = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	info = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!info)
		return (NULL);
	info->size = size;

	table = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!table)
	{
		free(info);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table[i] = NULL;

	info->array = table;

	return (info);
}
