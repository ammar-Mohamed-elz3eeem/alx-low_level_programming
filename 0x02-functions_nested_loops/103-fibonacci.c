#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int first = 1;
	int second = 2;
	int current = 0;
	int sum = second;

	while ((first + second) < 4000000)
	{
		current = first + second;
		if (current % 2 == 0)
		{
			sum += current;
		}
		second = first;
		first = current;
	}
	printf("%d\n", sum);
	return (0);
}
