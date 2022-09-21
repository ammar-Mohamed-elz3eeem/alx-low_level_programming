#include "main.h"

/**
 * rev_string - function to change string and reverse it
 * @str: chars array
 */

void rev_string(char *org_str)
{
	int len = _strlen(org_str);
	int counter = 0;

	while (len > counter)
	{
		char temp = *(org_str + counter);
		*(org_str + counter) = *(org_str + len);
		*(org_str + len) = temp;
		len--;
		counter++;
	}
}
