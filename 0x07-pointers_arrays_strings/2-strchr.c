#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: the string to check
 * @c: the charcter to check
 *
 * Return: a pointer to c if true, or null if false
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s[0] == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
