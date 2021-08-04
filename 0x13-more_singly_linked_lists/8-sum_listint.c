#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code
 * @head: the pointer the head of the list
 *
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *temporary = head;
	unsigned int cum = 0;

	while (temporary != NULL)
	{
		cum += temporary->n;
		temporary = temporary->next;
	}
	return (cum);

}
