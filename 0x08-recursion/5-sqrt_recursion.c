#include "holberton.h"

/**
 * get_sqrt - gets the natural square root
 *
 * @n: the value to calculate
 * @increment: increment the value to validate the square
 *
 * Return: the natural square root of n
 */
int get_sqrt(int increment, int n)
{
	if (increment * increment == n)
		return (increment);
	if (increment * increment > n)
		return (-1);

	return (get_sqrt(increment + 1, n));
}


/**
 * _sqrt_recursion - returns the natural square root
 *
 * @n: the value to calculate
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (get_sqrt(1, n));
}
