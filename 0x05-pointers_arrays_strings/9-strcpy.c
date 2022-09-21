#include "main.h"

/**
 * _strcpy - copy from string to another
 * @dest: string to copy to
 * @src: string to copy from
 * Return: dest string
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;
	int len = 0;

	while (src[len])
		len++;

	while (counter <= len)
	{
		*(dest + counter) = src[counter];
		counter++;
	}
	return (dest);
}
