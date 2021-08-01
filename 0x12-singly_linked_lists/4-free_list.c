#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: the address to the head of the list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
		if (head->str)
			free(head->str);
		temporary = head;
		head = head->next;
		free(temporary);
	}
}
