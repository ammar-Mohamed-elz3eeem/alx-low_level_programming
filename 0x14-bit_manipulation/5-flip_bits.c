#include "main.h"
#include <stdio.h>

/**
 * flip_bits - count the number of flips needed
 * to move from one number to another
 * @n: number to move from
 * @m: number to move into
 * Return: number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorbits = n ^ m;
	int counter = 0;

	while (xorbits)
	{
		if (xorbits & 1)
		{
			counter++;
		}
		xorbits = xorbits >> 1;
		print_binary(xorbits);
		putchar('\n');
	}

	return counter;
}
