#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid_main;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid_main = malloc(height * sizeof(int *));
	if (grid_main == NULL)
	{
		free(grid_main);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid_main[i] = malloc(width * sizeof(int));
		if (grid_main[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid_main[i]);
			free(grid_main);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid_main[i][j] = 0;

	return (grid_main);
}
