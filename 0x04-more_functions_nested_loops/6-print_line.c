#include "holberton.h"

/**
 * print_line - prints all digits
 * @n: Number of lines to print
 *
 * Return: void
 */
void print_line(int n)
{
	int size = 1;

	if (n > 0)
	{
		while (size <= n)
		{
			_putchar(95);
			size++;
		}
	}
	_putchar('\n');
}
