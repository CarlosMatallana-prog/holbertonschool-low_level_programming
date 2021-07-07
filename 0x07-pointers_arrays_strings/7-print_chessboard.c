#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - Print the checkboard
 * @a: the string to check
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf("%c", a[i][j]);
			j++;

		}
		printf("\n");
		i++;

	}

}
