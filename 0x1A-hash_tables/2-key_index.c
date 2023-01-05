#include "hash_tables.h"

/**
 * key_index - return the index of the array in the hash table
 * @key: hashed key
 * @size: size of hash table
 * Return: index of the array element on the hashtable
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
