#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print string reversed
 * @s: string to print from
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		putchar(*s);
	}
}
