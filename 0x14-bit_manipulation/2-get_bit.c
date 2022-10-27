#include "main.h"

/**
 * get_bit - get the indexed bit from a number
 * @n: number to get bit from
 * @index: index of the bit you want
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	if (!(n > 0))
		return (-1);
	while (i <= index)
	{
		if (i == index)
			return ((n & _pow(2, i)) >> i);
		i++;
	}
	return (-1);
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