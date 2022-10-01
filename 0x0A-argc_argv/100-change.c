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
	int coins[5] = {1, 2, 5, 10, 25};
	int num_of_coins = 0;
	int cents;
	int currency;

	if(argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	
	if (cents <= 0) {
		printf("0\n");
		return (0);
	}

	while(cents > 0)
	{
		for (currency = 4; currency >= 0; currency--)
		{
			if (cents - coins[currency] >= 0)
			{
				cents = cents - coins[currency];
				break;
			}
		}
		num_of_coins++;
	}

	printf("Number of Coins is: %d\n", num_of_coins);
	return (0);
}