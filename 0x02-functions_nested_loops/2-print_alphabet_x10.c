#include "holberton.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char i;
	int times = 0;

	while (times < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		times++;
	}

}
