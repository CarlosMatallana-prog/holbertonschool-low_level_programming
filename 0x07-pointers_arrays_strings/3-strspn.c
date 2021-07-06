#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - get the lenght of a string inside another
 * @s: the string to check
 * @accept: the charcter to check
 *
 * Return: the lenght of the substring or null
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0, s_i = 0, accept_i;

	while (s[s_i] != '\0' && s[s_i] != ',')
	{
		accept_i = 0;
		while (accept[accept_i] != '\0')
		{
			if (s[s_i] == accept[accept_i])
			{
				counter++;
			}
			accept_i++;
		}
		s_i++;
	}

	return (counter);
}
