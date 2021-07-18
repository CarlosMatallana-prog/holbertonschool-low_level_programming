#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to a 2 dimensional array || NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Assign the height */
	grid = malloc(sizeof(int *) * height);

	/* check the allocated memory for height*/
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		/* Check the allocated memory for width */
		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(grid[k]);
			return (NULL);
		}

		/* Fill the array */
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
