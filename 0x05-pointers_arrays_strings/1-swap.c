#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - Prints FizzBuzz
 * @a: the value to change
 * @b: the value to change
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
