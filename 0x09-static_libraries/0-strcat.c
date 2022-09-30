#include "main.h"

/**
 * _strcat - concatinate two strings together
 * @dest: string to concate to
 * @src: string to concate from
 * Return: the string after being concatinated
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
