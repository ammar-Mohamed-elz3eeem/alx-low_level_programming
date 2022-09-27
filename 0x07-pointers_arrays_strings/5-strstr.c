#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: string to search on
 * @accept: string to search of its charchters
 * Return: Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int eq = 0;

	while (*needle)
	{
		if(*needle == *(haystack + eq))
		{
			needle++;
			eq++;
		}
		else
		{
			haystack++;
		}
	}
	return (haystack);
}

/**
 * hello, world
 * world
 */