#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of chars to be concatinated
 * Return: a pointer that point to a newly allocated space in memory,
 * which contains s1, followed by
 * the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1len, s2len, i, j, idx2 = 0;
	char *new_str;

	for (s1len = 0; s1[s1len]; s1len++)
		;
	for (s2len = 0; s2[s2len]; s2len++)
		;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n > s2len)
		n = s2len;

	new_str = malloc(sizeof(char) * (s1len + n) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		*(new_str + i) = s1[i];

	j = i;
	while (j < (n + i))
	{
		*(new_str + j) = s2[idx2];
		idx2++;
		j++;
	}

	new_str[j] = '\0';

	return (new_str);
}
