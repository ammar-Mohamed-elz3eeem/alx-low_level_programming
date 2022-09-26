#include "main.h"
#include <stdio.h>

/**
 * _memcpy - add string or part of it to a specified place on another string
 * @dest: first string that you want to add to
 * @src: string you want to add
 * @n: number of charchters you want
 * Return: the new string
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
