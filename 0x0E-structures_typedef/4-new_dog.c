#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * new_dog - init a new dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: Nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *store_name, *store_owner;
	int name_size = 0, owner_size = 0, k, l;
	dog_t *new_puppy;

	if (name == 0 || owner == 0)
		return (NULL);

	new_puppy = malloc(sizeof(dog_t));
	if (new_puppy == NULL)
		return (NULL);

	/* store the dog name */
	while (name[name_size] != '\0')
		name_size++;
	store_name = malloc((name_size * sizeof(char)) + 1);
	if (store_name == NULL)
	{
		free(new_puppy);
		return (NULL);
	}
	for (k = 0; k < name_size + 1; ++k)
		store_name[k] = name[k];

	/* store the dog owner */
	while (owner[owner_size] != '\0')
		owner_size++;
	store_owner = malloc((owner_size * sizeof(char)) + 1);
	if (store_owner == NULL)
	{
		free(store_name);
		free(new_puppy);
		return (NULL);
	}
	for (l = 0; l < owner_size + 1; ++l)
		store_owner[l] = owner[l];

	new_puppy->name = store_name;
	new_puppy->age = age;
	new_puppy->owner = store_owner;

	return (new_puppy);

}

