#include "stdio.h"
#include "stdlib.h"

/**
 * main - prints the opcodes of its own main function.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	int argument_one, i;
	char *str;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}

	argument_one = atoi(argv[1]);
	if (argument_one < 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}
	str = (char *) main;

	for (i = 0; i < argument_one; i++)
	{
		if (i < argument_one - 1)
			printf("%.2hhx ", str[i]);
		else
			printf("%.2hhx", str[i]);
	}
	printf("\n");

	return (0);
}
