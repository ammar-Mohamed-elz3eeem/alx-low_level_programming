#include "main.h"

/**
 * _strncat - concatinate two strings together
 * @dest: string to concate to
 * @src: string to concate from
 * @n: copy only specified number of charchters
 * Return: the string after being concatinated
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int counter = 0;
	int len_s2 = 0;

	while (dest[len] != '\0')
		len++;
	while (src[len_s2] != '\0')
		len_s2++;
	if (len_s2 < n)
		n = len_s2;
	while (counter < n)
	{
		*(dest + len + counter) = *src;
		src++;
		counter++;
	}

	return (dest);
}
