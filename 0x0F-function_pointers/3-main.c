#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of strings represent command-line arguments
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char **argv)
{
	int op_func;
	int num1 = atoi(argv[1]), num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (1);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (1);
	}

	op_func = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", op_func);

	return (0);
}
