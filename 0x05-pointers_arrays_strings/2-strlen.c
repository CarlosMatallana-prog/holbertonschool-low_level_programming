#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - return the lenght of a string
 * @s: the string
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i, lenght = 0;
	for(i = 0; s[i] != '\0'; i++)
	{
		lenght = i;
	}
	/* One is the final null char */
	return lenght + 1;
}
