#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int num = 0x0;

	while (num <= 0xf)
	{
		if (num > 0x9)
			putchar('W' + num);
		else
			putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
