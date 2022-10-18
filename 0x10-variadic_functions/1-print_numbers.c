#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints all numbers given in argument list
 * @n: number of arguments passed to the function
 * @separator: string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n) && i)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%d", va_arg(args, int));
	}
	printf("\n");
}
