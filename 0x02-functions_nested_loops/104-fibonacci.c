#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;
	int numbers = 2;
	unsigned long int current;

	printf("%ld, %ld, ", first, second);
	while (numbers < 98)
	{
		current = first + second;
		printf("%ld", current);
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
