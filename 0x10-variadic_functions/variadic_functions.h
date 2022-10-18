#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
void print_char(va_list args);
void print_number(va_list args);
void print_float(va_list args);
void print_string(va_list args);

typedef struct datatypes
{
	char *ch;
	void (*printer)(va_list args);
} printer;

#endif