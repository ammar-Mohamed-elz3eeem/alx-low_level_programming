#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of strings represent command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if ('0' - argv[i] != 0)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
