#include "main.h"

/**
 * puts2 - print the other charchter of string
 * @str
 */

void puts2(char *str)
{
	while (*str)
	{
		putchar(*str);
		str += 2;
	}
}
