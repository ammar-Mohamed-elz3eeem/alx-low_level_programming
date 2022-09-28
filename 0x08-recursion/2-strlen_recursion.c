#include "main.h"

/**
 * _strlen_recursion - get the number of the charchters on the string
 * @s: string to count charchters
 * Return: the number of chars on string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
