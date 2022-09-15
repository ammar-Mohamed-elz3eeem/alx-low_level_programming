#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char ch = 0;

	while (ch < 10)
	{
		_putchar('0' + ch);
		ch++;
	}
	_putchar('\n');
}
