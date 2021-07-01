#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - concatenates 2 strings with n leght for src
 * @dest: the string to be attached
 * @src: the string to attach
 * @n: the size of the new dest string
 *
 * Return: a pointer with the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_lenght = 0, src_lenght = 0, i;

	while (dest[dest_lenght] != '\0')
		dest_lenght++;

	while (src[src_lenght] != '\0')
		src_lenght++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_lenght + i] =  src[i];

	return (dest);
}
