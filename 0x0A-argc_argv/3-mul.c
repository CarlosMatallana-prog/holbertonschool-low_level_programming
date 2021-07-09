#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of 2 numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success status
 */
int main(int argc, char *argv[])
{
	int numbers = argc - 1;

	if (numbers == 2)
		printf("%d\n", atoi(argv[2]) * atoi(argv[3]));
	else
		printf("Error\n");

	return (0);
}
