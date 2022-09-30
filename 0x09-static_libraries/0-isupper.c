#include "main.h"

/**
 * _isupper - check if string is uppercase or not
 * @c: char to test
 * Return: 1 if char is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
