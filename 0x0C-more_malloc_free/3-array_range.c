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
	int *chain, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1
	chain = malloc(sizeof(int) * size);
	if (chain != NULL)
	{
		for (i = 0; i < size; i++)
		{
			chain[i] = min;
			min++;
		}
		return (chain);
	}

	return (NULL);

}
