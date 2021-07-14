#include "holberton.h"

/**
 * get_prime - check al the number since 2 until get the prime
 *
 * @min: the min value to check
 * @n: the number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int get_prime(int min, int n)
{
	if (n < 2 || n % min == 0)
		return (0);
	else if (min > n / 2)
		return (1);
	else
		return (get_prime(min + 1, n));
}

/**
 * is_prime_number - Checks if a value is a prime number
 *
 * @n: the value to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (get_prime(2, n));
}
