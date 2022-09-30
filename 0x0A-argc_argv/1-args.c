#include <stdio.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of strings represent command line arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
