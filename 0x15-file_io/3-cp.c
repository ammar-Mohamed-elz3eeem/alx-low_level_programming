#include "main.h"
#include <stdio.h>

/**
 * main - program to copy content from file to file
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char **argv)
{
	int file_from, file_to, close_dest, close_src;
	char *buffer;
	ssize_t len = 0;
	int total = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_from <= 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	while ((len = read(file_from, buffer, 1024)) > 0)
	{
		write(file_to, buffer, len);
		total += len;
	}
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_dest = close(file_from);
	close_src = close(file_to);

	check_close_file_handler(close_dest, &file_from);
	check_close_file_handler(close_src, &file_to);

	return (0);
}

/**
 * check_close_file_handler - check if file is closed or not
 * @handler_closer: the integer number returned by the close function
 * @file_handler: the file that you want to close
 */

void check_close_file_handler(int handler_closer, int *file_handler)
{
	if (handler_closer < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *file_handler);
		exit(100);
	}
}
