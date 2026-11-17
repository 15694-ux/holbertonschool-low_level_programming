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
	int w, h, **grid, *row, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	h = 0;
	w = 0;
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	while (h < height)
	{
		grid[h] = malloc(w * sizeof(int));
		if (grid[h] == NULL)
		{
			i = 0;
			while (i < h)
			{
				free(grid[i]);
				i = i + 1;
			}
		row = malloc(width * sizeof(int));
		grid[h] = row;
		h = h + 1;
		}
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
