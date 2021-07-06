#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - Fills memory with a constant
 * @s: Pointer with char array
 * @b: The string constant
 * @n: Int with the size
 *
 * Return: a pointer with the result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
