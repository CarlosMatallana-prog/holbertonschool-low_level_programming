#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the binary representation of a number
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
