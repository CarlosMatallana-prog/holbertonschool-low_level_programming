#include "stdio.h"

void before() __attribute__ ((constructor));

/**
 * before - a function that prints a phrase before main
 *
 * Return: Void
 */
void before(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
