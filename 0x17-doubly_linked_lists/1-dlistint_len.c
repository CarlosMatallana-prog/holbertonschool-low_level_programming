#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
