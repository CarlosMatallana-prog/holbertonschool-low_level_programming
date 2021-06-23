#include "holberton.h"

/**
* print_last_digit - entry point
* @n: number to validate
*
* Description: Print the last digit of a number
*
* Return: p
*/

int print_last_digit(int n)
{

	int p;

	if (n < 0)
	{
		n = -n;
	}
	p = n % 10;
	_putchar('0' + p);
	return (p);

}
