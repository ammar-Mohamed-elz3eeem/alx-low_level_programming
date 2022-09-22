#include "main.h"

/**
 * _strcat - concatinate towo strings together
 * @dest: string to concate to
 * @src: string to concate from
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (*src)
	{
		*(dest + len) = *src;
		src++;
		len++;
	}

	return (dest);
}
