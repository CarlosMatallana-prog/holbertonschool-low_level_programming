#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array- funtion that reverse the array
 *@a: the string to revese
 *@n: the number of elements
 *
 * Return: 0 is void
 */
void reverse_array(int *a, int n)
{
	int i, temporal;

	for (i = 0; i < (n / 2); i++)
	{
		temporal = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temporal;
	}
}
