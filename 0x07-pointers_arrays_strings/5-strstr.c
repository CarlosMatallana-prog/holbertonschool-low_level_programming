#include "holberton.h"
#include <string.h>

/**
 * _strstr - Gets the length of a prefix substring.
 * @haystack: char pointer value
 * @needle: char pointer value
 *
 * Return: the pointer to the initial segment of s
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j, k, l;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				for (k = i + 1, l = j + 1; needle[k] != '\0'; k++, l++)
				{
					if (needle[k] != haystack[l])
						return (NULL);
				}
				return (&haystack[j]);
			}

		}
	}
	return (NULL);
}
