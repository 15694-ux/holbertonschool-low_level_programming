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
	int w, h, **grid, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
	{
		return (NULL);
	}

	h = 0;

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
			free(grid);
			return (NULL);
		}
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
