#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: int represent number of its length
 * Return: void
 */

void print_diagonal(int n)
{
	int row = 0;

	while (row < n)
	{
		int col = 0;

		while (col < row)
		{
			_putchar(' ');
			col++;
		}
		_putchar('\\');
		_putchar('\n');
		row++;
	}
	if (n <= 0)
		_putchar('\n');
}
