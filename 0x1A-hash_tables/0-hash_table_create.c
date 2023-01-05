#include "hash_tables.h"

/**
 * hash_table_create - create new hashtable with specified size
 * @size: integer represent number of items in the hash table
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(size * sizeof(hash_table_t));
	if (table == NULL)
		return NULL;

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return NULL;
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return table;
}