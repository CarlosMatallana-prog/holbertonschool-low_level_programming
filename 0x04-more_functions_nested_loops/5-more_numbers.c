#include "holberton.h"

/**
* more_numbers - prints all digits
*
* Return: void
*/
void more_numbers(void)
{
	int times = 0, number, tens, units;

	while (times < 10)
	{
		for (number = 0; number <= 14; ++number)
		{
			units = number % 10;
			if (number > 9)
				tens = (number / 10) + '0';
			else
				tens = 0;
			_putchar(tens);
			_putchar(units + '0');
		}
		_putchar('\n');
		times++;
	}
}
