#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - funtion that compares two strings
 *@s1: the first string to compare
 *@s2: the first string to compare
 *
 * Return: the diference between the two string first letter
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	if (s1[i] == '\0')
	{
		return (0);
	}

	return (s1[i] - s2[i]);
}
