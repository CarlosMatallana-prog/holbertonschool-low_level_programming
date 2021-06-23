#include "holberton.h"

/**
* _abs - entry point
* @n: number to validate
*
* Description: Print absolute value of a number
*
* Return: n
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
