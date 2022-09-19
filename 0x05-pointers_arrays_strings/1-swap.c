#include "main.h"

/**
 * swap_int - swap two ineteger variables
 * @n1: first integer
 * @n2: second integer
 */

void swap_int(int *n1, int *n2)
{
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
