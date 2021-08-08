#include "main.h"

/**
 * print_number - check the code
 * @n: the number to print
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	int m = n > 0 ? n : -(n);

	if (n != 0)
	{
		if (n < 0)
			_putchar('-');
		while (m != 0)
		{
			_putchar(m % 10 + '0');
			m = m / 10;
		}
	}
	else
		_putchar('0');
}
