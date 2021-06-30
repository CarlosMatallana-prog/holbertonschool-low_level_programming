#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - return a reversed string character
 * @s: the string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int delta = 0, lenght = 0;

	while (s[delta])
		delta++;

	for (lenght = delta - 1; lenght >= 0; lenght--)
		_putchar(s[lenght]);

	_putchar('\n');
}
