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
	int file_handler = open(filename, 0, STDIN_FILENO);
	int len;
	char *buffer;

	buffer = malloc(sizeof(char) * (letters + 1));
	len = read(file_handler, buffer, letters);

	printf("%s", buffer);
	return len;
}
