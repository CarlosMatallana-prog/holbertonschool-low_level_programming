#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int
main(void)
{
	int c;
	char ci;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}

	for (ci = 'a'; ci <= 'f'; ci++)
	{
		putchar(ci);
	}
	putchar('\n');
	return (0);
}
