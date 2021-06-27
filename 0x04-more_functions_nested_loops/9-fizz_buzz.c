#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints FizzBuzz
 *
 * Return: 0, success
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
	      	if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
	   		if (i == 100)
			{
				putchar('\n');
				return (0);
			}
			continue;
		}
		else
		{
			printf("%d ", i);
			continue;
		}
	}
	return (0);
}
