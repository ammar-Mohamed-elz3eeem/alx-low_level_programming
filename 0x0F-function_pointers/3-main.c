#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of strings represent command-line arguments
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		print("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0 || (atoi(argv[3])) <= 0)
	{
		print("Error\n");
		return (1);
	}

	int op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		print("Error\n");
		return (1);
	}
}
