#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - return a reversed string character
 * @s: the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, k = 0, j;
	char temp;

	while (s[i] != '\0')
		i++;

	j = i - 1;

	while (j >= 0 && k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;

		k++;
		j--;
	}
}
