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
	char arr[5][2] = {{'4', 'a'}, {'3', 'e'}, {'0', 'o'}, {'1', 'l'}, {'7', 't'}};

	while (str[i])
	{
		int ch = 0;

		while (ch < 5)
		{
			if (str[i] == arr[ch][1])
			{
				str[i] = arr[ch][0];
			}
			ch++;
		}
		i++;
	}
	return (str);
}
