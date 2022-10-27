#include "main.h"

/**
 * clear_bit - clear a bit at specifiec index
 * @n: pointer to number to clear its bit
 * @index: index of the bit you want to clear
 * Return: 1 if bit is cleared, ohterwise 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n &= (~(1 << index));
	return (1);
}

// 10000000000
// 01111111111
// -------------
// 00000000000