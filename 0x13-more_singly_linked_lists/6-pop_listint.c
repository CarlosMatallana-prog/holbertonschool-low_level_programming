#include "lists.h"

/**
 * pop_listint - a function that frees a listint_t list
 * @head: the address to the head of the list
 *
 * Return: Void
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;

	if (*head != NULL)
	{
		temporary = *head;
		*head = temporary->next;
		free(temporary);
		return ((*head)->n);
	}
	else
		return (0);
}
