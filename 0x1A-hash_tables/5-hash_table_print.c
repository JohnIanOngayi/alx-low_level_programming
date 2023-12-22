#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table info struct
 */
void hash_table_print(const hash_table_t *ht)
/**/
{
	unsigned long int i;
	hash_node_t *ptr;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			if (printed == 1)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			printed = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
