#include "main.h"

/**
 * print_times_table - get times table
 *
 * @n: integer value represent the number you want to print its table
 * Return: void
 */

void print_times_table(int n)
{
	int number = 0;

	if (n > 15 || n < 0)
		return;
	while (number <= n)
	{
		int multipler = 0;

		while (multipler <= n)
		{
			if (number * multipler > 99)
			{
				_putchar('0' + (number * multipler) / 100);
				_putchar('0' + (number * multipler) % 100 / 10);
				_putchar('0' + (number * multipler) % 10);
			}
			else if (number * multipler > 9)
			{
				_putchar('0' + (number * multipler) / 10);
				_putchar('0' + (number * multipler) % 10);
			}
			else
				_putchar('0' + number * multipler);
			if (multipler != n)
			{
				if ((number * (multipler + 1)) > 99)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if ((number * (multipler + 1)) > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			multipler++;
		}
		_putchar('\n');
		number++;
	}
}
