#include <stdio.h>

/**
 * main - entry point for our program
 *
 * Return: always return 0
 */

int main(void)
{
	char uc = 'A';
	char lc = 'a';

	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}

	putchar('\n');
	return (0);
}
