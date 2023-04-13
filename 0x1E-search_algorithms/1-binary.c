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
	return (do_binary_searching_for(array, size - 1, value));
}

/**
 * do_binary_searching_for - the recuresion call to
 * set the lowest & highest point in the array
 * using for statements
 *
 * @array: array of integers
 * @high: last element of array
 * @value: integer value to search for
 * Return: the index of the value in array, otherwise -1
 */

int do_binary_searching_for(int *array, size_t high, int value)
{
	size_t i, left, right;

	for (left = 0, right = high; left <= right;)
	{
		i = left + ((right - left) / 2);
		print_array(array, left, right);
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

/**
 * do_binary_searching_rec - the recuresion call to
 * set the lowest & highest point in the array
 *
 * @array: array of integers
 * @low: first element of subarray
 * @high: last element of subarray
 * @value: integer value to search for
 * Return: the index of the value in array, otherwise -1
 */

int do_binary_searching_rec(int *array, size_t low, size_t high, int value)
{
	int mid = low + ((high - low) / 2);

	print_array(array, low, high);
	if (low > high)
		return (-1);
	if (array[mid] > value)
		return (do_binary_searching_rec(array, 0, mid - 1, value));
	else if (array[mid] == value)
		return (mid);
	return (do_binary_searching_rec(array, mid + 1, high, value));
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
