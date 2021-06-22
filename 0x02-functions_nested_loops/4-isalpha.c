#include "holberton.h"

/**
* _isalpha - entry point
* @c: character to validate
*
* Description: Check if a character is an alpha character
*
* Return: void
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	return (0);
}
