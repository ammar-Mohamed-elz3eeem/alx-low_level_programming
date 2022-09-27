#include "main.h"

/**
 * _strspn - find the first pos of a char in string that matches
 * the first charchter on accept
 * @s: string to search on
 * @accept: string to search of its charchters
 * Return: position of the non prefix string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int curr = 0;

	while (s[curr] != '\0')
	{
		unsigned int i = 0;
		unsigned int j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[curr])
			{
				++i;
				break;
			}
			j++;
		}
		if (i == 0)
			return (curr);
		curr++;
	}
	return (curr);
}
