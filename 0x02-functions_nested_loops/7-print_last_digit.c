#include "main.h"

/**
 * print_last_digit - print and return the last digit of any number
 *
 * @number: number to get its last digit
 * Return: last digit of any number
 */

int print_last_digit(int number)
{
	int lastDigit = number % 10;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
