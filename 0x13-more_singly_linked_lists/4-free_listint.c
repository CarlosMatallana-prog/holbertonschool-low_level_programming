#include "lists.h"

/**
 * free_listint - a function that frees a list_t list
 * @head: the address to the head of the list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;
		free(temporary);
	}
}
