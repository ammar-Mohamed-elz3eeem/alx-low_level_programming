#include "main.h"

/**
 * _sqrt_recursion - find the natural square root of any number recursively
 * @n: number to get its square root
 * Return: the square root of any number
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(2, n));
}

/**
 * _sqrt - get the natural square root of any number
 * @n: number to get its square root
 * @i: increment number working as square root, always equal 0
 * Return: the square root of any number
 */

int _sqrt(int i, int n)
{
	if (i > n / 2)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(i + 1, n));
}
