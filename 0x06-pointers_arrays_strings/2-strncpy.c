#include "main.h"

/**
 * _strncpy - copy string according to specified number of chars
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of charchters you need to copy from @src
 * Return: the new copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	while (src[counter] != '\0' && counter < n)
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}

	while(counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}

	return (dest);
}
