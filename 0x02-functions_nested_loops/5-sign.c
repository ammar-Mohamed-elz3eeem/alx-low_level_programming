#include "main.h"

/**
 * print_sign - check if the entered charchter positive or zero or negative
 *
 * @sign: the charchter to test
 * Return: 1 if the sign entered is positive,
 * 0 if the sign entered is zero,
 * -1 if the sign entered is negative
 */

int print_sign(int sign)
{
	if (sign > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (sign == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
