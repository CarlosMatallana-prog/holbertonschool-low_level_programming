#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

/**
 * struct dog - structure of the dog.
 *
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner.
 *
 * Description: Structure for storing the params of the dog.
 */
void print_name(char *name, void (*f)(char *));

#endif /* DOG */
