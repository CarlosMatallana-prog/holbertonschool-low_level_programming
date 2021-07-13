#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised y times
 *
 * @x: the value to elevate
 * @y: the times to rais x
 *
 * Return: the the value of x raised
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
