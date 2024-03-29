#ifndef __SEARCH_ALGO__
#define __SEARCH_ALGO__
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int do_binary_searching_rec(int *array, size_t low, size_t high, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int do_binary_searching_for(int *array, size_t high, int value);
int do_jump_search_rec(int *array, size_t left, int step,
		       int value, size_t size);
int jump_search(int *array, size_t size, int value);
int do_jump_search_for(int *array, size_t left,
		       int step, int value, size_t size);

#endif
