#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - make a pointer to a 2 dimensional array of integers.
 * @width: number of columns of the matrix
 * @height: number of rows of the matrix
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int col;
	int row;

	if (!width || !height)
		return (NULL);

	arr = malloc(height * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (row = 0; row < width; row++)
		arr[row] = malloc(sizeof(int) * width);

	for (col = 0; col < height; col++)
		for (row = 0; row < width; row++)
			arr[col][row] = 0;

	return (arr);
}