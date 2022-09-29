#include "main.h"

/**
 * is_palindrome - check if string is palindrome or not
 * palindrome means that if word or sentence reversed
 * it will be read as it was before
 * @s: string to make test on
 * Return: 1 if it is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (!*s)
		return (1);

	int len = 0;

	while (s[len])
		len++;

	return (compare(s, 0, len));
}

/**
 * compare - compares two chars in string recursivly
 * to check if they are equal or not
 * @s: string to make test on
 * @start: start index of the string
 * @end: the length of the string
 * Return: 1 if it is palindrome, 0 otherwise
 */

int compare(char *s, int start, int end)
{
	if (*(s + start) != *(s + end - 1))
	{
		return (0);
	}
	else if (start >= end)
		return (1);
	return (compare(s, ++start, --end));
}
