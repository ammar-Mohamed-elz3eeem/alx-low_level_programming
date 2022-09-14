#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	long double first = 1;
	long double second = 2;
	int numbers = 2;
	long double current;

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
