#include "hash_tables.h"

/**
 * hash_table_set - insert element into hash table
 * @ht: hash_table element
 * @key: the key of the element to be inserted into hash table
 * @value: value assosicated with that key in the hash table
 * Return: 1 if inertion, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newEl;
	unsigned long int i = 0, index;
	char *value_dup;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	for (; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
	}
	newEl = malloc(sizeof(hash_node_t));
	if (newEl == NULL)
	{
		free(value_dup);
		return (0);
	}
	newEl->key = strdup(key);
	if (newEl->key == NULL)
	{
		free(newEl);
		return (0);
	}
	newEl->value = value_dup;
	newEl->next = ht->array[index];
	ht->array[index] = newEl;

	return (1);
}
