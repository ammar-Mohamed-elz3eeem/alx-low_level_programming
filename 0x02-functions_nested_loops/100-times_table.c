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
				putchar('0' + (number * multipler) / 100);
				putchar('0' + (number * multipler) % 100 / 10);
				putchar('0' + (number * multipler) % 10);
			}
			else if (number * multipler > 9)
			{
				putchar('0' + (number * multipler) / 10);
				putchar('0' + (number * multipler) % 10);
			}
			else
				putchar('0' + number * multipler);
			if (multipler != n)
			{
				if ((number * (multipler + 1)) > 99)
				{
					putchar(',');
					putchar(' ');
				}
				else if ((number * (multipler + 1)) > 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				else
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
				}
			}
			multipler++;
		}
		putchar('\n');
		number++;
	}
}
