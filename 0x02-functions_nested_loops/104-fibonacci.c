#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
        double first = 1;
        double second = 2;
        int numbers = 2;
        double current;

        printf("%.0f, %.0f, ", first, second);
        while (numbers < 98)
	{
		current = first + second;
		printf("%.0f", current);
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
