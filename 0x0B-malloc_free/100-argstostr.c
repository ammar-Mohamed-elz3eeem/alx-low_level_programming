#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments passed to the program
 * @av: array of strings represents the command-line arguments
 * Return: string for every word in command-line args array
 * seperated by newline
 */

char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int i, j, len = 0, newlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * len + 1);

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[newlen] = av[i][j];
			newlen++;
		}
		str[newlen++] = '\n';
	}

	return (str);
}
