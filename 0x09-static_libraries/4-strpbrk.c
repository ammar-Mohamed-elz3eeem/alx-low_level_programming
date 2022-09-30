#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: string to search on
 * @accept: string to search of its charchters
 * Return: Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		unsigned int accept_char = 0;

		while (accept[accept_char] != '\0')
		{
			if (*s == accept[accept_char])
			{
				i++;
			}
			accept_char++;
		}
		if (i > 0)
			return (s);
		s++;
	}
	return ('\0');
}
