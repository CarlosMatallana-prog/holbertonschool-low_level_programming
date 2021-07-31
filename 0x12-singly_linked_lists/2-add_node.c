#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the address of the list head
 * @str: the string to add to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	/* str needs to be duplicated */
	/* You are allowed to use strdup */

	list_t *new_node;
	size_t len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		continue;
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);

}
