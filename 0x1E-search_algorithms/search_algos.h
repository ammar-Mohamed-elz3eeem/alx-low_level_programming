#ifndef __SEARCH_ALGO__
#define __SEARCH_ALGO__
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int do_binary_searching(int *array, size_t low, size_t high, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);

#endif
