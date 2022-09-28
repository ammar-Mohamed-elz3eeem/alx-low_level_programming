#include "main.h"

/**
 * factorial - get the factorial of any input number
 * @n: number to calc factorial for
 * Return: the calculated factorial of the input number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
