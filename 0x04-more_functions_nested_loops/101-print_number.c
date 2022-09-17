#include "main.h"

/**
 * print_number - prints any number using only putchar
 * @n: takes input and prints every char on it
 */

void print_number(int n)
{
	unsigned int new_num = 0;

	if (n < 0)
	{
		_putchar('-');
		new_num = 0 - n;
	}
	else
		new_num = n;
	if (new_num / 10)
		print_number(new_num / 10);
	_putchar((new_num % 10) + '0');
}
