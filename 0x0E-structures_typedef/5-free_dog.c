#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_dog - free a dog
 *
 * @d: the dog type dog to free
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
