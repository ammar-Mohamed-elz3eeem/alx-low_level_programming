#include "main.h"

/**
 * print_rev - print any string reversed
 * @str: string to reverse
 */

void print_rev(char *str)
{
	int len = _strlen(str);
	int counter = 0;

	while (len >= 0)
	{
		putchar(*(str + len));
		len--;
	}
	putchar('\n');
}
