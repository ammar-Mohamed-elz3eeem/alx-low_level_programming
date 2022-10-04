#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits the string into array of words
 * (seperator is set to space)
 * @str: string that we want to split
 * Return: array of words
 */

char **strtow(char *str)
{
	int i, j = 0, h, words, wordlen = 0;
	char **words_arr;

	words = word_count(str);
	words_arr = malloc(sizeof(char *) * words + 1);

	if (words_arr == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str); i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
			wordlen++;
		else if (((str[i] == ' ') || (str[i] == '\0')) &&
			 (str[i - 1] != ' ') && wordlen)
		{
			printf("current size is: %d\n", wordlen);
			words_arr[j] = malloc(sizeof(char) * wordlen + 1);
			if (words_arr[j] == NULL)
			{
				while (j-- >= 0)
					free(words_arr[j]);
				free(words_arr);
				return (NULL);
			}
			else
			{
				for (h = 0; h < wordlen; h++)
					words_arr[j][h] = str[(i - wordlen) + h];
				words_arr[j][h] = '\0';
				wordlen = 0;
				j++;
			}
		}
	}

	return (words_arr);
}

/**
 * _strlen - get string length
 * @str: string to calculate length
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	for (; str[i]; i++)
		;
	return (i);
}

/**
 * word_count - returns number of words in the inout string
 * @str: string to work with
 * Return: number of words in the string
 */

int word_count(char *str)
{
	int i, number_of_words = 0;

	while (str[i])
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
			i++;
		else if ((str[i] == ' ') && (str[i - 1] != ' '))
		{
			number_of_words++;
			i++;
		}
		else
			i++;
	}

	return (number_of_words);
}
