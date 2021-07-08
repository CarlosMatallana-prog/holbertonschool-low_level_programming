#include <stdio.h>

/**
 * main - Prints all arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success status
 */
int main(int argc, char *argv[])
{
	int iterator = 0;

	while (iterator < argc)
	{
		printf("%s\n", argv[iterator]);
		iterator++;
	}

	return (0);
}
