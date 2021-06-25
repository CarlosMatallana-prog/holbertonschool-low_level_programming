#include "holberton.h"

/**
* _isdigit - checks if the input is a digit
* @c: character to check
*
* Return: 1 if c is a digit, otherwise returns  0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
