#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int max = 1024;
	int current = 1;
	int sum = 0;

	while (current < max)
	{
		if (current % 5 == 0 || current % 3 == 0)
		{
			sum += current;
		}
		current += 1;
	}

	printf("%d\n", sum);
	return (0);
}
