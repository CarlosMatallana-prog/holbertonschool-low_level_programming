#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 * @dest: the string to be attached
 * @src: the string to attach
 *
 * Return: a pointer with the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int total_lenght = 0, dest_lenght = 0, src_lenght = 0, i;

	while (dest[dest_lenght] != '\0')
		dest_lenght++;

	while (src[src_lenght] != '\0')
		src_lenght++;

	total_lenght = dest_lenght + src_lenght;

	for (i = 0; i <= total_lenght; i++)
		dest[dest_lenght + i] =  src[i];

	return (dest);
}
