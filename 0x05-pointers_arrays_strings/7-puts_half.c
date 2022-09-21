#include "main.h"

/**
 * puts_half - prints the second half of string
 * @str: string to operate on
 */

void puts_half(char *str)
{
	int len = 0;
	int str_half;

	while (str[len])
		len++;

	if (len % 2 == 0)
		str_half = len / 2;
	else
		str_half = (len - 1) / 2;

	/*printf("length of string is: %d\n", len);
	printf("half length of string is: %d", str_half);*/
	while (str[str_half])
	{
		putchar(str[str_half]);
		str_half++;
	}
	putchar('\n');
}
