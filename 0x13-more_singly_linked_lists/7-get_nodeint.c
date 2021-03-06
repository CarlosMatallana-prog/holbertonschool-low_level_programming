#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: the pointer to the header
 * @index: the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *temporary = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; ++i)
	{
		temporary = temporary->next;
		if (temporary == NULL)
			return (NULL);
	}
	return (temporary);

}
