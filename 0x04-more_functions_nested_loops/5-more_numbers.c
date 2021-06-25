#include "holberton.h"

/**
* more_numbers - prints all digits
*
* Return: void
*/
void more_numbers(void)
{
	int times = 0, number;

	while (times < 10)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
		times++;
	}
}
