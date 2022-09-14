#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int first = 0;
	int second = 1;
	int current = 0;
	unsigned long sum = second;

	while (first < 4000000)
	{
		current = first + second;
		second = first;
		first = current;
		if (first % 2 == 0)
			sum += first;
	}
	printf("%lu\n", sum);
	return (0);
}
