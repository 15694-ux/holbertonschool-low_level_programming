#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees malloc of grid
 * @height: Rows
 * @grid: Grid to be cleared
 */
void free_grid(int **grid, int height)
{
	int h;



	if (grid == NULL)

		return;
	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h = h + 1;
	}
	free(grid);
}
