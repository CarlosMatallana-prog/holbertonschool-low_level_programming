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
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * c);

	if (size != 0 || str != NULL)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}

		return (str);
	}

	return ('\0');

}
