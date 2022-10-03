#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: a new allocated space which,
 * contains the string giving in parameter,
 * Null otherwise
 */

char *_strdup(char *str)
{
	unsigned int size;
	unsigned int i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size]; size++)
		;

	new_str = malloc(size * sizeof(*str) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	return (new_str);
}
