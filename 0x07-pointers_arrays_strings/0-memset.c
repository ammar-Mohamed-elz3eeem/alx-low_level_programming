#include "main.h"

/**
 * _memset - fills the first n charchter with blank byte
 * @s: string to fill
 * @b: byte to put in the string
 * @n: number of charchter to insert in the string @s
 * Return: the string after being filled
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
