#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", number);
		}
		if (number != 100)
		{
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
