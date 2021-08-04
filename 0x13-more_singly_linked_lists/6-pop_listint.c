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
	int n = 0;

	if (*head != NULL)
	{
		temporary = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = temporary;
		return (n);
	}
	else
		return (0);

}
