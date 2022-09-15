#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @ch: charchter to check
 * Return: 1 if is uppercase, 0 otherwise
 */

int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	return (0);
}
