#include "main.h"

/**
 * get_endianness - find if program is big endianness or little endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 5;
	char *ptr = (char *)&i;
	if (ptr[0] == 5)
		return (1);
	else
		return (0);
}
