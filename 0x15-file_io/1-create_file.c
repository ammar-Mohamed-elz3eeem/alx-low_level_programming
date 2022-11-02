#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to be created
 * @text_content: text you want to insert
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_handler, file_writer, len = 0;

	file_handler = open(filename, O_CREAT | O_RDWR | O_TRUNC, STDIN_FILENO);

	while (text_content[len] != '\0')
		len++;

	file_writer = write(file_handler, text_content, len);

	if (file_handler <= 0 || filename == NULL || file_writer <= 0)
		return (-1);

	close(file_handler);
	return 1;
}
