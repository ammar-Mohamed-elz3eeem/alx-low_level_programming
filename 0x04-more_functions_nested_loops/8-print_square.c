#include "main.h"

/**
 * print_square - prints square of hashtags
 * @size: size of square
 */

void print_square(int size)
{
	int length = 0;

	while (length < size)
	{
		int width = 0;

		while (width < size)
		{
			_putchar('#');
			width++;
		}
		_putchar('\n');
		length++;
	}
	if (size <= 0)
		_putchar('\n');
}
