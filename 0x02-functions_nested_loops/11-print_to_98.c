#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - entry point
* @n: number to validate
*
* Description: Prints all the numbers until 98
*
* Return: void
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}	 
	}
	printf("98\n");
}
