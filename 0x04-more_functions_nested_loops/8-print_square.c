#include "holberton.h"

/**
 * print_square - prints a square
 * @size: Size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int rows = 1, columns;

	if (size > 0)
	{
		while (rows <= size)
		{
			columns = 1;
			while (columns <= size)
			{
				_putchar(35);
				columns++;
			}
			_putchar('\n');
			rows++;
		}
	}
	else
		_putchar('\n');
}
