#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string pointer to concatenate
 * @s2: string pointer to concatenate
 * @n: the size to concatenate
 *
 * Return: a pointer  to a newly allocated space in memory || NULL if size = 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k;

	if (s1 == NULL || s2 == NULL || n <= 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;

	if (n > j)
		return (NULL);

	k = i + n;

	str = malloc((k + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; i < k; i++, j++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
