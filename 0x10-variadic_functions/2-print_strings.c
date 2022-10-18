#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints all strings given in argument list
 * @n: number of arguments passed to the function
 * @separator: string to be printed between strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (i != (n) && i)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	printf("\n");
}
