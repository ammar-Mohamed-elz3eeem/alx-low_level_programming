#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		int number = 0;

		while (number < 15)
		{
			if (number >= 10)
			{
				_putchar('0' + (number / 10));
				_putchar('0' + (number % 10));
			} else
				_putchar('0' + number);
			number++;
		}
		counter++;
		_putchar('\n');
	}
}
