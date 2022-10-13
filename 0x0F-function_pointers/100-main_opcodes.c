#include "stdio.h"
#include "stdlib.h"

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of strings represent command-line arguments
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int (*address)(int, char *[]) = main;
	int idx, opcode, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (idx = 0; idx < bytes; idx++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		address++;
		if (idx != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
