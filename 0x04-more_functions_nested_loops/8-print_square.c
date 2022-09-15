#include "main.h"

/**
 * print_square - prints square of hashtags
 * @n: size of square
 */

void print_square(int n)
{
	int length = 0;
	while (length < n)
	{
		int width = 0;
		while (width < n)
		{
			_putchar('#');
			width++;
		}
		_putchar('\n');
		length++;
	}
	if (n == 0)
		_putchar('\n');
}
