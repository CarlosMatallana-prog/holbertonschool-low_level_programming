#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to update
 * @index: the index of the bit
 *
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n |= (1 << index);
		return (1);

	}
	return (-1);

}
