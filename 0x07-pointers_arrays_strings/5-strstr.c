#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates the first occurrence in the string
 * haystack of any of all bytes in the string needle
 * @haystack: string to search on
 * @needle: string to search of its charchters
 * Return: Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int ned_len = 0;

	while (needle[ned_len])
		ned_len++;

	while (*haystack)
	{
		unsigned int eq = 0;
		
		while (*needle)
		{
			if(*needle == *(haystack + eq) && eq < ned_len)
			{
				needle++;
				eq++;
			}
			else
				break;
		}
		haystack++;
	}
	return '\0';
}

/*
 * my name is ammar massoud
 * amei
 */
