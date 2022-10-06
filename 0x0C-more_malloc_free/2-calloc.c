#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * of nmemb elements of size bytes each and
 * returns a pointer to the allocated memory
 * @nmemb: number of elements on an array
 * @size: size of single element on the array
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (!nmemb || !size)
		return (NULL);

	void *ptr;

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);

	return (ptr);
}
