#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: the given as a parameter.
 *
 * Return: a pointer  || NULL if str = NULL
 */

char *_strdup(char *str)
{
    unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		continue;

	i++;
	s = malloc(i * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		s[j] = str[j];

	return (s);
}