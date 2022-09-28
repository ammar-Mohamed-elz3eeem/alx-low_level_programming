#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print string reversed
 * @s: string to print from
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
