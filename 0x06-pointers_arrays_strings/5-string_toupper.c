#include "main.h"

/**
 * string_toupper - convert all lowercase letters to uppercase
 * @str: string to operate on
 * Return: string after converting all lowers to uppers
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
