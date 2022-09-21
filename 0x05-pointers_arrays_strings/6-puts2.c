#include "main.h"

/**
 * puts2 - print the other charchter of string
 * @str: string to operate on
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
