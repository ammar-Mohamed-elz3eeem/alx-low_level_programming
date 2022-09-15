#include "main.h"

/**
 * print_line - prints _ according to the input to the function
 * @n: number indicates number of _ to print
 * Return: void
 */

void print_line(int n)
{
	int counter = 0;

	while (counter < n)
	{
		_putchar('_');
		counter++;
	}
	_putchar('\n');
}
