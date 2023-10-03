#include "main.h"

/**
 * free_grid - Frees the 2D grid previously created by the alloc_grid function.
 * @grid: Double pointer to 2D grid.
 * @height: Number of rows in 2D grid (Grid height).
 * Return: Void.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	/* Free memory allocated to individual rows */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free memory allocated to array of pointers to rows */
	free(grid);
}
