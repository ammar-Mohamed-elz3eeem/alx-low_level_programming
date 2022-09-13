#include "main.h"

/**
 * jack_bauer - print every minute of the day
 */

void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int minutes = 0;

		while (minutes < 60)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
