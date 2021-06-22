#include "holberton.h"

/**
* _islower - entry point
* @c: character to validate
*
* Description: Check if a character is an uppercase or lower case
*
* Return: void
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	return (0);
}
