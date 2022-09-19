#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check its length
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
