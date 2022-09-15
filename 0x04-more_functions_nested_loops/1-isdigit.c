#include "main.h"

/**
 * _isdigit - check is paramter is digit or not
 * @num: charchter to check if digit or not
 * Return: 1 if it was digit, 0 otherwise
 */

int _isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	return (0);
}
