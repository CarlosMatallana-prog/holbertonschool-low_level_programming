#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to structure
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	list_t *temporary = (list_t *)h;
	size_t nodes = 0;

	while (temporary != NULL)
	{
		if (!temporary->str)
		{
			printf("[0] (nil)\n");
			temporary = temporary->next;
			nodes++;
		}
		else
		{
			printf("[%d] %s\n", temporary->len, temporary->str);
			temporary = temporary->next;
			nodes++;
		}
	}
	return (nodes);

}
