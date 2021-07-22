#include "3-calc.h"

/**
 * op_add - Adds a and b.
 * @a: number a.
 * @b: number b.
 *
 * Return: returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction between a and b.
 * @a: number a.
 * @b: number b.
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication between a and b.
 * @a: number a.
 * @b: number b.
 *
 * Return: returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division between a and b.
 * @a: number a.
 * @b: number b.
 *
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus between a and b.
 * @a: number a.
 * @b: number b.
 *
 * Return: returns the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
