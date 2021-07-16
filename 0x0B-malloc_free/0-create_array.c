#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: the size of the array
 * @c: the specif char to initiate the array
 *
 * Return: a pointer to the array || NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (size == 0 || s == '\0')
	{
		return ('\0');
	}
	else
	{
		while (i < size)
		{
			s[i] = c;
			i++;
		}
		return (s);
	}
	return ('\0');

}
