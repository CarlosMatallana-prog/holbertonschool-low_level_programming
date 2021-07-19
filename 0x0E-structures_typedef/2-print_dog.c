#include "dog.h"
#include <stdio.h>


/**
 * print_dog - prints the dog structure
 * @d: the dog variable
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = nil;
		if (d->owner == NULL)
			d->owner = nil;

		printf("Name:%s\n", d->name);
		printf("Age:%f\n", d->age);
		printf("Owner:%s\n", d->owner);
	}

}
