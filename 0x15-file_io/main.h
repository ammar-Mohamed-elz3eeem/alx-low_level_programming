#ifndef FILESIO_MAIN
#define FILESIO_MAIN

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
void check_close_file_handler(int handler_closer, int *file_handler);

#endif