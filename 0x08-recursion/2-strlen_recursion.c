#include "holberton.h"

/**
 * _strlen_recursion - Gets the lenght of a string
 *
 * @s: the string to mesure
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
