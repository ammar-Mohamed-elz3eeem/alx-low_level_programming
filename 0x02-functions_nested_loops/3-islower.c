#include "main.h"

/**
 * _islower - check if charchter is lower case or not
 *
 * @c: charchter to check
 *
 * Return: 1 if the letter is lowercase
 * 0 if the leeter is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
