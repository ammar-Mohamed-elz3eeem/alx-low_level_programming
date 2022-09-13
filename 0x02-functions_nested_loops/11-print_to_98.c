#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all number till the number 98
 *
 * @num: number to go from it to 98
 * Return: void
 */

void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num != 98)
				printf(", ");
			num--;
		}
	}
	else
	{
		while (num <= 98)
		{
			printf("%d", num);
			if (num != 98)
				printf(", ");
			num++;
		}
	}
	printf("\n");
}
