#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: return newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int nlen;
	char *new_str;

	if (s1)
		while (s1[len1])
			len1++;
	if (s2)
		while (s2[len2])
			len2++;

	new_str = malloc(sizeof(char) * (len1 + len2) + 1);

	for (nlen = 0; nlen < (len1 + len2); nlen++)
	{
		if (s1)
		{
			new_str[nlen] = *s1;
			s1++;
		}
		else
		{
			new_str[nlen] = *s2;
			s2++;
		}
	}

	new_str[nlen] = '\0';

	return new_str;
}
