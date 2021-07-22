#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - The function to check a simple operation
 *
 * @argc: Number of arguments for the program.
 * @argv: Pointer to arguments.
 *
 * Return: 0 on success || 98 if args elements are wrong ||
 *  99 if operator are wrong || 100 if divide or modulus = 0
 */
int main(int argc, char **argv)
{
	int operation, i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	i = (atoi(argv[1]));
	j = (atoi(argv[3]));

	operation = get_op_func(argv[2])(i, j);
	printf("%d\n", operation);
	return (0);

}
