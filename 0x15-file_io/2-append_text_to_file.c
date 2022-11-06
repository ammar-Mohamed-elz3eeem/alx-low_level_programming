#include "main.h"

/**
 * append_text_to_file - appends a text to the end of a file
 * @filename: file to append text to
 * @text_content: content need to be added to filename
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd <= 0)
		return (-1);

	if (text_content != NULL)
		for (; text_content[len]; len++)
			;

	write(fd, text_content, len);

	return (1);
}
