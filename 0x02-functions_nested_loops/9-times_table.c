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

	int i, j = 0, d, u;

	while (j <= 9)
	{
		for (i = 0; i <= 9; ++i)
		{
			d = ((j * i) / 10) + 48;
			u = ((j * i) % 10) + 48;
			if (i == 0) {
				_putchar(48);
				_putchar(44);
			}
			else
			{
				(j * i > 9) ? _putchar(d) : _putchar(32);
				_putchar(u);
				if (i < 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
		j++;
	}
}
