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
	int iterator = 0;

	if (argc > 1)
	{
		while(iterator < argc - 1)
			iterator++;
	}

	printf("%d\n", iterator);

	return (0);
}
