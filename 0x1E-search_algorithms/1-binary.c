#include "search_algos.h"

/**
 * binary_search - searches for a value in
 * an array of integers using the
 * Binary search algorithm
 *
 * @array: array of integers
 * @size: size of array
 * @value: integer value to search for
 * Return: the index of the value in array, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (size <= 0 || array == NULL)
		return (-1);
	return (do_binary_searching(array, 0, size - 1, value));
}

/**
 * do_binary_searching - the recuresion call to
 * set the lowest & highest point in the array
 *
 * @array: array of integers
 * @low: first element of subarray
 * @high: last element of subarray
 * @value: integer value to search for
 * Return: the index of the value in array, otherwise -1
 */

int do_binary_searching(int *array, size_t low, size_t high, int value)
{
	int mid = low + ((high - low) / 2);

	print_array(array, low, high);
	if (low >= high)
		return (-1);
	if (array[mid] > value)
		return (do_binary_searching(array, 0, mid - 1, value));
	else if (array[mid] < value)
		return (do_binary_searching(array, mid + 1, high, value));
	else if (array[mid] == value)
		return (mid);
	return (-1);
}

/**
 * print_array - prints an array of integers
 *
 * @array: array of integers to be printed
 * @low: first index in array
 * @high: last elemet in array
 */

void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
