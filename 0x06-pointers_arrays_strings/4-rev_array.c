#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of elements on the array
 */

void reverse_array(int *a, int n)
{
	int len = n - 1;
	int counter = 0;

	while (len > counter)
	{
		int temp = *(a + counter);
		*(a + counter) = *(a + len);
		*(a + len) = temp;
		len--;
		counter++;
	}
}
