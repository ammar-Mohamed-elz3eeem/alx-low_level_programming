#include "hash_tables.h"

/**
 * shash_table_create - create sorted_hashtable consists of size of elements
 * @size: number of elements on the hashtable
 * Return: Pointer to the newly created sorted hashtable
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));

	if (sht == NULL)
		return (NULL);

	sht->size = size;

	sht->array = malloc(sizeof(shash_node_t *) * size);

	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		sht->array[i] = NULL;

	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}

/**
 * shash_table_set - Adds an element to a sorted hashtable.
 * @ht: the sorted hash table.
 * @key: The key to add.
 * @value: The value associated with key.
 *
 * Return: 0 Upon failure, 1 Otherwise.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *inserted_node, *temporary_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	temporary_node = ht->shead;
	inserted_node = malloc(sizeof(shash_node_t));
	inserted_node->key = strdup(key);
	inserted_node->value = strdup(value);
	inserted_node->next = ht->array[index];
	ht->array[index] = inserted_node;
	if (ht->shead == NULL)
	{
		inserted_node->snext = NULL;
		inserted_node->sprev = NULL;
		ht->shead = inserted_node;
		ht->stail = inserted_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		inserted_node->sprev = NULL;
		inserted_node->snext = ht->shead;
		ht->shead->sprev = inserted_node;
		ht->shead = inserted_node;
	}
	else
	{
		temporary_node = ht->shead;
		while (temporary_node->snext != NULL &&
		       strcmp(temporary_node->snext->key, key) < 0)
			temporary_node = temporary_node->snext;
		inserted_node->sprev = temporary_node;
		inserted_node->snext = temporary_node->snext;
		if (temporary_node->snext == NULL)
			ht->stail = inserted_node;
		else
			temporary_node->snext->sprev = inserted_node;
		temporary_node->snext = inserted_node;
	}
	return (1);
}

/**
 * shash_table_get - get element from the sorted hashtable
 * @ht: hashtable
 * @key: key to the element to be retrieved
 * Return: value of that element from hashtable
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;
	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - print all elements in the hash table
 * @ht: hash table element
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print all elements in the hash table
 *				in reverse order
 * @ht: hash table element
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete all elements in the hash table
 * @ht: hash table element
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
	free(head->array);
	free(head);
}
