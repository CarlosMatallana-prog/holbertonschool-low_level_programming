#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print the checkboard
 * @a: the int pointer
 * @size: the size to add
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int r = 0, l = 0;

	for (i = 0; i < size; i++)
	{
		l = l + a[i];
		r = r + a[size - 1 - i];
		a = a + size;
	}
	printf("%d, %d\n", l, r);
}
