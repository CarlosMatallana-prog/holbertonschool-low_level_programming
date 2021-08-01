#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the address to the head of the list
 * @str: the string to add
 *
 * Return: the address of the new element || NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* str needs to be duplicated */
	/* You are allowed to use strdup */

	list_t *new_node;
	list_t *old_node;
	size_t len;

	for (len = 0; str[len]; len++)
		continue;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	old_node = *head;
	if (*head)
	{
		while (old_node->next)
			old_node = old_node->next;
		old_node->next = new_node;
	}
	else
		*head = new_node;
	return (*head);
}
