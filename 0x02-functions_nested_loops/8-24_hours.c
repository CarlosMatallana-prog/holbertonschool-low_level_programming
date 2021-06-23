#include "holberton.h"

/**
* jack_bauer - entry point
*
* Description: Prints every minute of Jack Bauer day
*
* Return: void
*/

void jack_bauer(void)
{

	int i, j;
	for (i = 0; i < 24; ++i)
	{
		for (j = 0; j < 60; ++j)
		{
			_putchar(48 + i/10);
			_putchar(48 + i%10);
			_putchar(58);
			_putchar(48 + j/10);
			_putchar(48 + j%10);
			_putchar('\n');
		}
	}

}
