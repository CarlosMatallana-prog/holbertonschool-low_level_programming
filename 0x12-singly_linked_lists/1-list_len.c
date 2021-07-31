#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to structure
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	list_t *temporary = (list_t *)h;
	size_t nodes = 0;

	while (temporary != NULL)
	{
		temporary = temporary->next;
		nodes++;
	}
	return (nodes);

}
