#include "main.h"

/**
 * string_toupper - convert all lowercase letters to uppercase
 * @str: string to operate on
 * Return: string after converting all lowers to uppers
 */

char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (str);
}
