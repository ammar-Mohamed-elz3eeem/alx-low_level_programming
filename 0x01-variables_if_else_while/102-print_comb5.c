#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int num1 = 0;

	while (num1 < 100)
	{
		int num2 = 0;

		while (num2 < 10)
		{
			int num3 = 0;

			while (num3 < 10)
			{
				int num4 = 0;

				while (num4 < 10)
				{
					if ((num1 * 10 + num2) < (num3 * 10 + num4))
					{
						putchar('0' + num1);
						putchar('0' + num2);
						putchar(' ');
						putchar('0' + num3);
						putchar('0' + num4);
						if (num1 * 10 + num2 != 98)
						{
							putchar(',');
							putchar(' ');
						}

					}
					num4++;
				}

				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
