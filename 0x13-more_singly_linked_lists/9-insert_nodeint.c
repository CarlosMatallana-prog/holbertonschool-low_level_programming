#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the pointer to the head of the list
 * @idx: the index of the list where the new node should be added. Index starts at 0
 *
 * Return: the address of the new node || NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temporary;
	int i = 0;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temporary = *head;
	if (idx > 0)
	{
		while (temporary != NULL && i < (idx - 1))
		{
			temporary = temporary.next;
			if (temporary == NULL)
				return (NULL);
			i++;
		}
		new_node.next = temporary.next;
		temporary.next = new_node;
	}

	return (new_node);


}
