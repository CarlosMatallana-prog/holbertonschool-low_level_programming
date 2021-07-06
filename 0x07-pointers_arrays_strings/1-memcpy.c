#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - Fills memory with a an asigned memory in another variable
 * @dest: the filled array
 * @src: the source of info
 * @n: Int with the size
 *
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}
