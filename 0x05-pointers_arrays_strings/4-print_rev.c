#include "main.h"

/**
 * print_rev - print any string reversed
 * @str: string to reverse
 */

void print_rev(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	while (len >= 0)
	{
		_putchar(*(str + len));
		len--;
	}
	_putchar('\n');
}
