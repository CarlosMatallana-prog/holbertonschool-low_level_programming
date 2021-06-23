#include "holberton.h"

/**
* times_table - entry point
*
* Description: Prints 9 times the 9 table
*
* Return: void
*/

void times_table(void)
{

	int c, i, j, d, u, space, coma;

	j = 0;
	c = 0;
	space = 32;
	coma = 44;

	while (c <= 9)
	{
		while (j <= 9)
		{
			for (i = 0; i <= 9; ++i)
			{
				d = ((j * i) / 10) + 48;
				u = ((j * i) % 10) + 48;
				(j * i > 9) ? _putchar(d) : _putchar(space);
				_putchar(u);
				if (i < 9)
					_putchar(coma);
				_putchar(space);
			}
			_putchar('\n');
			j++;
		}
		c++;
	}
}
