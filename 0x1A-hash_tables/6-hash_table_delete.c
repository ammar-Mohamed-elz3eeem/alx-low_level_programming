#include "hash_tables.h"

/**
 * hash_table_delete - delete hashtable object
 * @ht: hashtable
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	hash_node_t *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
