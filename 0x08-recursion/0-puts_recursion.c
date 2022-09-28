#include "main.h"

/**
 * _puts_recursion - print every char on the given string
 * @s: string to print from
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s)
	{
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
