#include "holberton.h"

/**
 * _calloc -  allocates memory using malloc
 *
 * @nmemb: the element to allocate
 * @size: the size of memory lo allocate
 *
 * Return: A pointer to the allocated memory || NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *free_memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	free_memory = malloc(nmemb * size);
	if (free_memory != NULL)
		for (i = 0; i < nmemb * size; ++i)
			free_memory[i] = 0;
	else
		return (NULL);

	return (free_memory);

}
