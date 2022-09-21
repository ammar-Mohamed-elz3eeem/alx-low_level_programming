#include "main.h"

/**
 * print_rev - print any string reversed
 * @str: string to reverse
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(*(str + i - 1));
		i--;
	}
	_putchar('\n');
}
