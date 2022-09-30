#include "main.h"

/**
 * _memset - check if char is found in the specified place or not
 * @s: string to check
 * @b: charchter to check
 * @n: position of the string
 * Return: the string from the specified position
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}