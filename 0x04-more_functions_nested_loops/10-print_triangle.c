#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: Size of the triagle base
 *
 */
void print_triangle(int size)
{
	int rows = 1, spaces, keys;

	if (size > 0)
	{
		while (rows <= size)
		{
			spaces = size - rows;
			keys = size - spaces;
			while (spaces > 0)
			{
				_putchar(32);
				spaces--;
			}
			while (keys > 0)
			{
				_putchar(35);
				keys--;
			}
			rows++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
