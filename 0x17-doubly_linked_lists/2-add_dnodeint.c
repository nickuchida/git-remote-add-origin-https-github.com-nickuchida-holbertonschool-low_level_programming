#include "lists.h"

/**
 * add_dnodeint - add node at beginning of list
 * @head: head
 * @n: where to add node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head || !n)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!new->n)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (new);
}
