#include "lists.h"

/**
 * add_dnodeint - adds a new node at the end of a dlistint_t list.
 * @head: The address of the head
 * @n: the data to fill the new node in the list
 *
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;

    if (head == NULL)
        return (NULL);
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;
    new->prev = NULL;
    new->next = *head;
    *head = new;
    if (new->next != NULL)
        (new->next)->prev = new;
    return (new);
}
