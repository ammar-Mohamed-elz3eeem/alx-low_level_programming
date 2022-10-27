#include "main.h"

/**
 * set_bit - set a bit in a number using it index
 * @n: pointer to number to set its bit
 * @index: index of the bit you want to set
 * Return: number after setting the bit to 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | 1 << index;
	return *n;
}
