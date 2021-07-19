#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * init_dog - init the dog structure
 * @d: the dog variable
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
