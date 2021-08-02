#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to structure
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)

{
	listint_t *temporary = (listint_t *)h;
	size_t nodes = 0;

	while (temporary != NULL)
	{
		printf("%d\n", temporary->n);
		temporary = temporary->next;
		nodes++;
	}
	return (nodes);

}
