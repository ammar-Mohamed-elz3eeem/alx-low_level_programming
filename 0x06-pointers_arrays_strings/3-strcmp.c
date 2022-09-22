#include "main.h"

/**
 * _strcmp - compares two string together
 * @s1: first string
 * @s2: second string to compare with
 * Return: 0 if two strings are equal
 * if the strings are not equal:
 * returns the difference between the unequaled chars
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
