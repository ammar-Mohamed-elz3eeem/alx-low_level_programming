#include "main.h"

/**
 * print_most_numbers - prints asll numbers except 2 & 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c != 4 && c != 2)
		{
			_putchar(c + '0');
		}
		c++;
	}
	_putchar('\n');
}
