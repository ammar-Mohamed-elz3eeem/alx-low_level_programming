#include "main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)
{
	int number = 0;

	while (number < 10)
	{
		int multipler = 0;

		while (multipler < 10)
		{
			if ((multipler * number) <= 9)
				_putchar('0' + (number * multipler));
			else
			{
				_putchar('0' + (number * multipler) / 10);
				_putchar('0' + (number * multipler) % 10);
			}
			if (multipler != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (((multipler + 1) * number) <= 9)
					_putchar(' ');
			}
			multipler++;
		}
		_putchar('\n');
		number++;
	}
}
