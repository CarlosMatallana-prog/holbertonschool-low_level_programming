#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success status
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int iterator;

	if (argc > 1)
	{
		for (iterator = 0; iterator < argc - 1; iterator++)
			continue;
	}
	else
	{
		iterator = 0;
	}


	printf("%d\n", iterator);

	return (0);
}
