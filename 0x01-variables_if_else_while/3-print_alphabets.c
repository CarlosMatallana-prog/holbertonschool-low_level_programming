#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int
main(void)
{
	char ch;
	char ci;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ci = 'A'; ci <= 'Z'; ci++)
	{
		putchar(ci);
	}
	putchar('\n');
	return (0);
}
