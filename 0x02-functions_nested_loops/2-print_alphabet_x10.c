#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		num++;
	}
}
