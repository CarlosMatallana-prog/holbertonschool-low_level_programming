#include "holberton.h"

/**
 * factorial - Gets the factorial of a number
 *
 * @n: the number to check
 *
 * Return: the factorial result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
