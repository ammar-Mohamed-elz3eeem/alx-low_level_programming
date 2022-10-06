#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers,
 * The array created should contain all the values
 * from min (included) to max (included),
 * ordered from min to max
 * @min: first element on array
 * @max: last element on array
 * Return: pointer to the newly created array,
 * 0 if min > max or pointer = NULL
 */

int *array_range(int min, int max)
{
	int idx = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (; min <= max; min++)
	{
		ptr[idx++] = min;
	}
	return (ptr);
}
