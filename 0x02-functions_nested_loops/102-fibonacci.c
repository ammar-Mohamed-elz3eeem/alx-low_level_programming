#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	double first = 1;
	double second = 2;
	int numbers = 2;
	double current;

	printf("%.0f, %.0f, ", first, second);
	while (numbers < 50)
	{
		current = first + second;
		printf("%.0f", current);
		if (numbers != 49)
		{
			printf(", ");
		}
		first = second;
		second = current;
		numbers += 1;
	}
	return (0);
}
