#include "holberton.h"

/**
 * _puts_recursion - Prints a string
 *
 * @s: the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
	else
	{
		putchar('\n');
	}
}
