#include "holberton.h"

/**
 * main - Add positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success status or 1 Fail status
 */
int main(int argc, char *argv[])
{
	int iterator, result = 0, iterator2;
	int numbers = argc - 1;

	if (numbers >= 1)
	{
		for (iterator = 1; iterator <= numbers; iterator++)
		{
			for (iterator2 = 0; argv[iterator][iterator2]  != '\0'; iterator2++)
			{
				if (argv[iterator][iterator2] < 48 || argv[iterator][iterator2] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			result += (atoi(argv[iterator]));
		}
		printf("%i\n", result);
		return (0);
	}
	else
		printf("0\n");

	return (1);
}
