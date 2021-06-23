#include "holberton.h"

/**
* print_last_digit - entry point
* @n: number to validate
*
* Description: Print the last digit of a number
*
* Return: m
*/

int print_last_digit(int n)
{

	int m, p;

	m = n % 10;
	if (m <  0)
	{
		m = -m;
	}
	p = '0' + m;
	_putchar(p);
	return (m);

}
