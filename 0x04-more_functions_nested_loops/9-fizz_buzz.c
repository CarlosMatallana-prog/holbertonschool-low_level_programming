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
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz\n");
				return (0);
			}
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	return (0);
}
