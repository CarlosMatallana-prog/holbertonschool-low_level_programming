#include "holberton.h"

/**
 * array_range -  creates an array of integers
 *
 * @min: the minimun value of the array
 * @max: the max value of the array
 *
 * Return: the pointer to the newly created array || NULL if fails
 */
int *array_range(int min, int max)
{
	int *chain = NULL, i, j;

	if (min > max)
		return (NULL);

	chain = malloc(sizeof(int) * (max - min) + 1);
	if (chain != NULL)
	{
		j = min;
		for (i = 0; i < (max - min) + 1; i++)
		{
			chain[i] = j;
			j++;
		}
		return (chain);
	}

	return (chain);
}
