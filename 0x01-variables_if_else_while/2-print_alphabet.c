#include <stdio.h>

/**
 * main - entry point for our program
 *
 * Return: always return 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
