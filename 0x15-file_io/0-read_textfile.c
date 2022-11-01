#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name to read from
 * @letters: number of chars you want to read
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_handler = open(filename, O_RDONLY, STDIN_FILENO);
	int len;
	char *buffer;

	if (file_handler <= 0 || filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	len = read(file_handler, buffer, letters);

	close(file_handler);

	return (write(STDOUT_FILENO, buffer, len));
}
