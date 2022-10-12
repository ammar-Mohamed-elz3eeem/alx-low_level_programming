#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array to iterate through
 * @size: size of the array
 * @action: function to be happened on each el of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
