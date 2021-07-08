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
	printf("%d\n", argc - 1);

	return (0);
}
