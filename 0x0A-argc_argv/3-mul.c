#include "holberton.h"

/**
 * main - Prints the multiplication of 2 numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success status or 1 Fail status
 */
int main(int argc, char *argv[])
{
	int numbers = argc - 1;

	if (numbers == 2)
	{
		printf("%d\n", ((atoi(argv[2]))) * ((atoi(argv[3]))));

		return (0);
	}
	printf("Error\n");

	return (1);
}
