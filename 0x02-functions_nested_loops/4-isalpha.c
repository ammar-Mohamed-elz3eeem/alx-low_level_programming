#include "main.h"

/**
 * _isalpha - check if letter is alphabetic
 *
 * @ch: charchter to test
 * Return: 1 if the charchter is alphbetic no matter upper or lower case
 * 0 otherwise
 */

int _isalpha(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return (1);
	return (0);
}
