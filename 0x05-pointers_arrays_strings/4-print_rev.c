#include "main.h"

/**
 * print_rev - print any string reversed
 * @str: string to reverse
 */

void print_rev(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		print_rev(str + 1);
	}
	_putchar(*str);
}
