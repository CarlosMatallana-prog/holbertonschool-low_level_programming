#include "holberton.h"

/**
* _isupper - checks for uppercase character
* left in the year, taking leap years into account
* @c: character to check
*
* Return: 1 if c is uppercase, otherwise 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}