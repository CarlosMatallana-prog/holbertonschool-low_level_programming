#include "holberton.h"

/**
 * malloc_checked -  allocates memory using malloc
 *
 * @b: the size of memory lo allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *memory_address;

	memory_address = malloc(b);
	if (memory_address == NULL)
	{
		exit(98);
	}
	return (memory_address);
}
