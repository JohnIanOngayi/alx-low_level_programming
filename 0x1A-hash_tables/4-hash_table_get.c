#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: a pointer to the hash table info struct
 * @key: the key being looked up
 * Return: the value associated with the element or NUL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *ptr = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = (ht->array)[index];
	while (ptr)
	{
		if (strncmp(key, ptr->key, strlen(key)) == 0)
		{
			return (ptr->value);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
