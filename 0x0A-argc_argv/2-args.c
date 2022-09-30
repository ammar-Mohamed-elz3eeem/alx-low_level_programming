#include <stdio.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of strings represent command line arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
