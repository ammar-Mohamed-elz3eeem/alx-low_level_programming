#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int num1 = 0;

	while (num1 < 10)
	{
		int num2 = 0;

		while (num2 < 10)
		{
			if (num2 > num1)
			{
				putchar('0' + num1);
				putchar('0' + num2);
				if (num1 != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
