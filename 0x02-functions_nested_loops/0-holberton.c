#include "holberton.h"

/* Return string */
/**
 * main - Entry point
 *
 * Return: 0
 */
int
main(void)
{
	char string[] = "Holberton\n";
	int i = 0;

	while (i < 10)
	{
		_putchar(string[i]);
		i++;
	}

	return (0);
}
