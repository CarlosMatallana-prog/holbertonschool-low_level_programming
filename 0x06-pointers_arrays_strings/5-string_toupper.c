#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - transforn lowercase letters to uppercase
 * @str: the string pointer to transform
 *
 * Return: tha transformed string
 */
char *string_toupper(char *str)
{
	int i, m = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			m = str[i] - 32;
			str[i] = m;
		}
	}

	return (str);

}
