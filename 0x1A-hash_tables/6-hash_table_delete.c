#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a pointer to the hash table info struct
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head = NULL;
	hash_node_t *iter = NULL;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			iter = head;
			head = head->next;
			_free(iter->key);
			_free(iter->value);
			_free(iter);
		}
		ht->array[i] = NULL;
	}
	_free(ht->array);
	_free(ht);
}

/**
 * _free - safely frees a non-NULL pointer
 * @ptr: the pointer to be freed
 */
void _free(void *ptr)
{
	if (ptr)
		free(ptr);
	ptr = NULL;
}
