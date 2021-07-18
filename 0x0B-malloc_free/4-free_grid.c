#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional
 * @grid: the address of the grid previously created by alloc_grid function
 * @height: height of the grid to release
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
