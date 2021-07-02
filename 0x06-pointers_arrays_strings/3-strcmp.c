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
	if (s1[0] == s2[0] || s1[0] != '\0' || s2[0] != '\0')
		return (0);

	return (s1[0] - s2[0]);
}
