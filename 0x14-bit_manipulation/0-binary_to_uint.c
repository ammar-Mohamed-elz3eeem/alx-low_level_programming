#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: binary number
 * Return: equivilant value to the binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	for (; b[len] != '\0'; len++)
		;

	for (; i < len; i++)
	{
		if (b[len - i - 1] != '0' && b[len - i - 1] != '1')
			return (0);
		if (b[len - i - 1] == '0')
			continue;
		num += (_pow(2, i) * (b[len - i - 1] - '0'));
	}
	return (num);
}

/**
 * _pow - raise the base num to the power of power
 * @base: number to be raised
 * @power: power of that number
 * Return: base after raised to power
 */

unsigned int _pow(int base, int power)
{
	unsigned int prod = base;
	int idx;

	if (power == 0)
		return (1);

	for (idx = 1; idx < power; idx++)
	{
		prod *= base;
	}
	return (prod);
}
