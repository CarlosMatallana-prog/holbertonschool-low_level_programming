#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: Size of the triagle base
 *
 * Return: void
 */
void print_triagle(int size)
{
	int rows = 1, numeral, spaces;

	if (size > 0)
	{
		numeral = 0;

		while (rows <= size)
		{
		spaces = size;
			while (numeral <= spaces)
			{
				if (spaces > numeral)
					_putchar(32);
				if(numeral <= size)
					_putchar(35);
				numeral++;
				spaces--;
			}
			_putchar('\n');
			rows--;
		}
	}
	else
		_putchar('\n');
}
