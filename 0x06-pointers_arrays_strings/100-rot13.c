#include "main.h"

/**
 * rot13 - ciphear any word using rot13 encryption
 * @str: string to cipher
 * Return: encrypted or decrypted string
 */

char *rot13(char *str)
{
	int i = 0;
	int start_char;
	int new_char;

	while (str[i])
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				start_char = 97;
			else
				start_char = 65;

			new_char = (((str[i] - start_char) + 13) % 26) + start_char;

			str[i] = new_char;
			break;
		}
		i++;
	}
	return (str);
}
