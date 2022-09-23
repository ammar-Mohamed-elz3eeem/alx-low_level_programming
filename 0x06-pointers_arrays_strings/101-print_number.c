#include "main.h"

/**
 * print_number - prints the digits on its input
 * @n: digits
 */

void print_number(int n)
{
	unsigned int num = 0;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;
	if (n / 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + num % 10);
}
