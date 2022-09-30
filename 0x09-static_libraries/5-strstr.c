#include "main.h"

/**
* _strstr - locate a substring in the given string
* @haystack: pointer to string to search on
* @needle: substring you want to search for in haystack
* Return: substring if it is found on haystack, otherwise 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
