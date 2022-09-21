#include "main.h"

/**
 * rev_string - function to change string and reverse it
 * @str: chars array
 */

void rev_string(char *org_str)
{
	int len = 0;
	int counter = 0;
	
	while (org_str[len])
		len++;
	while (len > counter)
	{
		char temp = *(org_str + counter);
		*(org_str + counter) = *(org_str + len);
		*(org_str + len) = temp;
		len--;
		counter++;
	}
}
