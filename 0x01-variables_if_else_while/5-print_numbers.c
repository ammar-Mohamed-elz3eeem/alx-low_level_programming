#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return 0
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
