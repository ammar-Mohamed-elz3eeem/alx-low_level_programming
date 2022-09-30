#include "main.h"

/**
 * _abs - get absoulte value of any number
 *
 * @n: number to get its abs value
 * Return: the absoulte value of a number
 */

int _abs(int n)
{
	if (n < 0)
		return (0 - n);
	return (n);
}
