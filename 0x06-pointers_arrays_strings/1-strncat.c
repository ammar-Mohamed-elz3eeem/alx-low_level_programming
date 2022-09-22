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

	while (dest[len] != '\0')
		len++;

	while (counter < n)
	{
		*(dest + len + counter) = *src;
		src++;
		counter++;
	}

	return (dest);
}
