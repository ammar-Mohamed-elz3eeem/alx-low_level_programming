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
			int num3 = 0;

			while (num3 < 10)
			{
				if (num2 > num1 && num3 > num2)
				{
					putchar('0' + num1);
					putchar('0' + num2);
					putchar('0' + num3);
					if (num1 != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
}
