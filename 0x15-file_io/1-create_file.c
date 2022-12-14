#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to be created
 * @text_content: text you want to insert
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_handler, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	file_handler = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write(file_handler, text_content, len);

	if (file_handler <= 0)
		return (-1);

	close(file_handler);
	return (1);
}
