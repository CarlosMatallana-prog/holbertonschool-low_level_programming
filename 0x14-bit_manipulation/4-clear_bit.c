#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number to update
 * @index: the index of the bit
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index < sizeof(unsigned long int) * 8)
	{
		tmp = 1 << index;
		*n = *n | tmp;
		*n = *n ^ tmp;
		return (1);

	}
	return (-1);

}
