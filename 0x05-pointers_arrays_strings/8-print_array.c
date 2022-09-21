#include <stdio.h>
#include "main.h"

/**
 * print_array - prints specified number of elements from array
 * @a: array to print from
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		printf("%d", *(a + counter));
		if (counter != n - 1)
		{
			printf(", ");
		}
		counter++;
	}
	_putchar('\n');
}
