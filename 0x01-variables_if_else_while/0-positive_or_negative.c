#include <stdlib.h>
#include <time.h>

/**
 * main - entry point for our program
 *
 * Return: always return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = read() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive", n);
	} else if (n < 0)
	{
		printf("%i is negative", n);
	} else
	{
		printf("%i is zero", n);
	}
	return (0);
}
