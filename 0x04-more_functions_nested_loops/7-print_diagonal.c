#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: Number of diagonal lines to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int rows = 0, spaces;

	if (n > 0)
	{
		while (rows < n)
		{
			spaces = 0;
			while (spaces < rows)
			{
				_putchar(32);
				spaces++;
			}
			_putchar(92);
			_putchar('\n');
			rows++;
		}
	}
	else
		_putchar('\n');
}
