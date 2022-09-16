#include "main.h"

/**
 * print_triangle - function to print a tringle using hashtags
 * @size: size of the tringle
 */

void print_triangle(int size)
{
	int rows = 0;

	while (rows < size)
	{
		int cols = size - 1;

		while (cols >= 0)
		{
			if (cols > rows)
				_putchar(' ');
			else
				_putchar('#');
			cols--;
		}
		_putchar('\n');
		rows++;
	}
	if (size <= 0)
		_putchar('\n');
}
