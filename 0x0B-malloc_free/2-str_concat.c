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
	int nlen = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	new_str = malloc(sizeof(char) * (len1 + len2) + 1);

	if (new_str == NULL)
		return (NULL);

	for (len1 = 0; s1[len1]; len1++)
		new_str[nlen++] = s1[len1];

	for (len2 = 0; s2[len2]; len2++)
		new_str[nlen++] = s2[len2];

	return (new_str);
}
