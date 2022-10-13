#include "function_pointers.h"

/**
 * print_name - prints a name using callback
 * @name: name of the person to be printed
 * @f: pointer to function to format the output
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
