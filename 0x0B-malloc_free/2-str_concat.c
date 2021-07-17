#include "holberton.h"

/**
 * str_concat - returns a pointer to a contatenated string
 *
 * @s1: string pointer to concatenate
 * @s2: string pointer to concatenate
 *
 * Return: a pointer  || NULL if str = NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, k, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	str = malloc((i + j) + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	for (n = 0; n < j + 1; n++)
		str[k + n] = s2[n];

	return (str);
}
