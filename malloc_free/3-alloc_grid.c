#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2D array of integers
 * @width: Width count
 * @height: Height count
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int w, h, **grid, *row;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	h = 0;
	w = 0;
	grid = malloc(height * sizeof(int *));

	while (h < height)
	{
		row = malloc(width * sizeof(int));
		grid[h] = row;
		h = h + 1;
	}

	h = 0;

	while (h < height)
	{

		w = 0;

		while (w < width)
		{
			grid[h][w] = 0;
			w = w + 1;
		}
		h = h + 1;
	}
	return (grid);
}
