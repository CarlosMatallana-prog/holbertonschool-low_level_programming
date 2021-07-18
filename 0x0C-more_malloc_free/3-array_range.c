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
	int *ar = NULL, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ar = malloc(sizeof(int) * (size));
	if (ar)
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = min;
			min++;
		}
	}
	return (ar);

}
