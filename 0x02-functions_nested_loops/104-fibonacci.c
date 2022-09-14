#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long double first = 1;
	unsigned long double second = 2;
	int numbers = 2;
	unsigned long double current;

	printf("%.0Lf, %.0Lf, ", first, second);
	while (numbers < 98)
	{
		current = first + second;
		printf("%.0Lf", current);
		if (numbers != 97)
		{
			printf(", ");
		}
		first = second;
		second = current;
		numbers += 1;
	}
	putchar('\n');
	return (0);
}
