#include "holberton.h"

/**
 * main - Calculate the numbers of coins to give change
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success status or 1 Fail status
 */
{
	int value, cont = 0, modulo;
	(void)argv;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
		printf("%d\n", 0);
	else
	{
		while (value > 0)
		{
			if (value / 25 != 0)
				modulo = 25;
			else if (value / 10 != 0)
				modulo = 10;
			else if (value / 5 != 0)
				modulo = 5;
			else if (value / 2 != 0)
				modulo = 2;
			else
			{
				cont += value;
				value -= 0;
				break;

			}

			cont += (value / modulo);
			value %= modulo;
		}
		printf("%d\n", cont);
	}
	return (0);
}
