#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints any number in binary format
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%ld", (n & 1));
}