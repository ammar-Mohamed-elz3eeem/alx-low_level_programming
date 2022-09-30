#include "main.h"

/**
 * _memcpy - copy from string src to string dest
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of chars to copy
 * Return: dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = (char) src[i];
		i++;
	}
	return (dest);
}
