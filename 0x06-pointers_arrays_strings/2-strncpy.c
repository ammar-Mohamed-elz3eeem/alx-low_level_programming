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
	int len_s2 = 0;
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (src[len_s2] != '\0')
		len_s2++;

	while (counter < n)
	{
		if ((counter) > len_s2)
		{
			*(dest + counter) = '\0';
		}
		else
			*(dest + counter) = *(src + counter);
		counter++;
	}
	if ((counter + len_s2) >= len)
	{
		while (len > counter)
		{
			*(dest + counter) = '\0';
			counter++;
		}
	}
	return (dest);
}
