#include "main.h"

/**
 * leet - convert chars (a,e,o,t,l) and thier uppercases
 * to (4,3,0,1,7) respectievly
 * @str: string to operate on
 * Return: string after modification
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			*(str + i) = '0' + 4;
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			*(str + i) = '0' + 3;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			*(str + i) = '0' + 0;
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			*(str + i) = '0' + 1;
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			*(str + i) = '0' + 7;
		}
		i++;
	}
	return (str);
}

