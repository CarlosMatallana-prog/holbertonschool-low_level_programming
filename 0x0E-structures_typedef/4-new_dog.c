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
	char *store_name = name, *copy_owner = owner;
	unsigned int name_size = 0, owner_size = 0, k, l;
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	/* store the dog name */
	while (name[name_size] != '\0')
		name_size++;
	store_name = malloc((name_size * sizeof(char)) + 1);
	if (store_name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	for (k = 0; k < name_size; ++k)
		store_name[k] = name[k];

	/* store the dog owner */
	while (owner[owner_size] != '\0')
		owner_size++;
	copy_owner = malloc((owner_size * sizeof(char)) + 1);
	if (copy_owner == NULL)
	{
		free(store_name);
		free(my_dog);
		return (NULL);
	}
	for (l = 0; l < owner_size; ++l)
		copy_owner[l] = owner[l];

	(*my_dog).name = store_name;
	(*my_dog).age = age;
	(*my_dog).owner = copy_owner;

	return (my_dog);

}

