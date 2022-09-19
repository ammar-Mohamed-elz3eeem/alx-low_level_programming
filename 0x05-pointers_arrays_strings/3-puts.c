#include "main.h"

/**
 * _puts - print the string to the stdout
 * @str: string to print to stdout
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
