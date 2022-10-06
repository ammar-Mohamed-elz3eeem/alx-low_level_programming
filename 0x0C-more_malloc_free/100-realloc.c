#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: already created pointer created with malloc or calloc
 * @old_size: the old size of the allocated pointer
 * @new_size: the new size of the allocated pointer
 * Return: NULL if new_size == 0, otherwise return pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		for (i = 0; i < min(old_size, new_size); i++)
			*((char *)new_ptr + i) = *((char *)ptr + i);

		free(ptr);
		return (new_ptr);
	}
	else
		return (NULL);
}

/**
 * min - get the minimum of two ints
 * @n1: first number
 * @n2: second number
 * Return: minimum number
 */

int min(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}
