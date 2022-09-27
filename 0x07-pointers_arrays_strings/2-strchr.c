#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns a pointer to the first occurance of char c in string c
 * @s: string to search on
 * @c: charchter to search for
 * Return: pointer to the first occurance of the char c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
