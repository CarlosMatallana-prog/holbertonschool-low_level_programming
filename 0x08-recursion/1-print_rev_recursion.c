#include "holberton.h"

/**
 * _print_rev_recursion - Revers and print a string
 *
 * @s: the string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		_print_rev_recursion(s);
		putchar(s[0]);
	}
	else
	{
		putchar('\n');
	}
}
