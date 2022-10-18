#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - print charchter from the argument list
 * @args: argument list to print from
 */

void print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	printf("%c", ch);
}

/**
 * print_number - print number from the argument list
 * @args: argument list to print from
 */

void print_number(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - print floating point number from the argument list
 * @args: argument list to print from
 */

void print_float(va_list args)
{
	float fnum;

	fnum = va_arg(args, double);
	printf("%f", fnum);
}

/**
 * print_string - print string from the argument list
 * @args: argument list to print from
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - function to print anything
 * @format: formatted string to print according to it
 */

void print_all(const char *const format, ...)
{
	int i = 0, order_of_function;
	char *seperator = "";
	va_list args;
	printer func[] = {
	    {"c", print_char},
	    {"i", print_number},
	    {"f", print_float},
	    {"s", print_string}};

	va_start(args, format);

	while (format[i])
	{
		order_of_function = 0;
		while (order_of_function < 4 && *(func[order_of_function].ch) != format[i])
			order_of_function++;
		if (order_of_function < 4)
		{
			printf("%s", seperator);
			func[order_of_function].printer(args);
			seperator = ", ";
		}
		i++;
	}
	printf("\n");
}
