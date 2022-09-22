#include "main.h"

/**
 * _strncat - concate two strings
 * @dest: string to concate to
 * @src: string to concate from
 * @n: number of chars from src to concate
 * Return: concatinated string
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

	while (counter < len_s2)
	{
		*(dest + len + counter) = *src;
		src++;
		counter++;
	}

	return (dest);
}
