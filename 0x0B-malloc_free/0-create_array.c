#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: number of elements in the array
 * @c: specified char to be default array element
 * Return: array with n size initialized with c char
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size <= 0)
		return NULL;

	arr = malloc(size * sizeof(char));

	if (arr == = NULL)
		return NULL;

	for (i = 0; i < sizeof(char) * size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
