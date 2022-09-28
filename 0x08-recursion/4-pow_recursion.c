#include "main.h"

/**
 * _pow_recursion - raise the first number to the power of the second number
 * @x: base number to calculate the power for
 * @y: the power to raise for the x number
 * Return: calculated result of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if(y < 0)
		return -1;
	else if (y == 0)
		return 1;
	else
		return x * _pow_recursion(x, y - 1);
}