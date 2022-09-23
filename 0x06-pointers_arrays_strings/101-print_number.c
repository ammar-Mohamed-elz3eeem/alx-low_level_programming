#include "main.h"

/**
 * print_number - prints the digits on its input
 * @n: digits
 */

void print_number(int n)
{
	int counter = 0;

	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	putchar('0' + n % 10);
}
