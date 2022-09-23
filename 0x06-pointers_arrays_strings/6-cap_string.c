#include "main.h"

/**
 * cap_string - capitalize every word of any word
 * that is seperated with (space, newline, tab, ',', ';'
 * '.', '!', '?', '"', '(', ')', '{' or '}'
 * @str: string to operate on
 * Return: string after capitalizing
 */

char *cap_string(char *str)
{
	int index = 0;

	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;

	while (str[index])
	{
		if (str[index] == ' ' ||
				str[index] == '\t' ||
				str[index] == '\n' ||
				str[index] == ',' ||
				str[index] == ';' ||
				str[index] == '.' ||
				str[index] == '!' ||
				str[index] == '\?' ||
				str[index] == '\"' ||
				str[index] == '(' ||
				str[index] == ')' ||
				str[index] == '{' ||
				str[index] == '}')
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
				str[index + 1] -= 32;
		}
		index++;
	}
	return (str);
}
