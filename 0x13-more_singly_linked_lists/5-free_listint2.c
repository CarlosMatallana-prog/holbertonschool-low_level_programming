#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: the address to the head of the list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temporary = (*head)->next;
			free(*head);
			*head = temporary;
		}
	}
	else
		return;
}
