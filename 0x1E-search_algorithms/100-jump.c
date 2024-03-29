#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for an element in array using
 * jumb search algorithm
 *
 * @array: array of integer elements
 * @size: number of elements in array
 * @value: element to be looked for
 * Return: index of the element in array, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size <= 0)
		return (-1);
	return (do_jump_search_for(array, 0, (int)sqrt((double)size), value, size));
}

/**
 * do_jump_search_rec - search for an element in array using
 * jumb search algorithm recursively
 *
 * @array: array of integer elements
 * @left: first index in array
 * @step: step to be jumped
 * @value: element to be looked for
 * @size: number of elements in array
 * Return: index of the element in array, -1 otherwise
 */

int do_jump_search_rec(int *array, size_t left, int step,
		       int value, size_t size)
{
	size_t i, right = 0;

	right = left + step;
	printf("Value checked array[%ld] = [%d]\n", left, array[left]);

	if (array[right] < value && right <= size)
		return (do_jump_search_rec(array, right, step, value, size));

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * do_jump_search_for - search for an element in array using
 * jumb search algorithm with for loop
 *
 * @array: array of integer elements
 * @left: first index in array
 * @step: step to be jumped
 * @value: element to be looked for
 * @size: number of elements in array
 * Return: index of the element in array, -1 otherwise
 */

int do_jump_search_for(int *array, size_t left, int step,
		       int value, size_t size)
{
	size_t prev, right, index;

	prev = left, right = left, index = left;
	do {
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		if (array[right] == value)
			return (index);
		index++;
		prev = right;
		right = index * step;
	} while (array[right] < value && right < size);
	printf("Value found between indexes [%ld] and [%ld]\n", prev, right);
	for (; prev <= right && prev < size; prev++)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
