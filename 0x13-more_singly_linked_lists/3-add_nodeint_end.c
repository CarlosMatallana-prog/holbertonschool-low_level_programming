#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - dds a new node at the end of a listint_t list
 * @head: the pointer to the head pointer of the list
 * @str: the number to add
 *
 * Return: the address of the new element || NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *old_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	old_node = *head;
	if (old_node)
	{
		while(old_node->next)
			old_node = old_node->next;
		old_node->next = new_node;
	}
	else
		*head = new_node;
	return (*head);

}
