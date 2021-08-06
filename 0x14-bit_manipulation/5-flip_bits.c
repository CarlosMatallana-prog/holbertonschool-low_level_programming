#include <stdio.h>
#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip one number to another
 * @n: the number to flip
 * @m: the another number to flip
 *
 * Return: number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp;
	unsigned long int sum = 0;

	if (sizeof(n) <= sizeof(unsigned long int) * 8)
	{
		tmp = n ^ m;
		while (tmp > 0)
		{
			sum += tmp & 1;
			tmp = tmp >> 1;
		}
		return (sum);

	}
	return (-1);

}
