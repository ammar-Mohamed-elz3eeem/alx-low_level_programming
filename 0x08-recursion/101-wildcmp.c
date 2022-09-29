#include "main.h"

/**
 * wildcmp - compares two strings using wildcarts
 * @s1: first string to compare with
 * @s2: second string to compare to
 * Return: 1 if strings are equal, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	return (wildcmp_recursion(s1, s2));
}

/**
 * wildcmp_recursion - compares two strings using wildcarts recursively
 * @s1: first string to compare with
 * @s2: second string to compare to
 * Return: 1 if strings are equal, 0 otherwise
 */

int wildcmp_recursion(char *s1, char *s2)
{
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{

		if (*(s2 + 1) == '*')
			return (wildcmp(s1, (s2 + 1)));

		else if (wildcmp(s1, s2 + 1))
			return (1);

		else
			return (wildcmp(s1 + 1, s2));
	}
}

