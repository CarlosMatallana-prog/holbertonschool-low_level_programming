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
	int st;

	if (n < 0)
	{
		n *= -1;
	}

	p = n%10;
	st = '0' + p;

	_putchar(st);

	return (p);

}
