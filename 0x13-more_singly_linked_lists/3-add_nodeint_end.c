#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_nodeint_end - add node at beginning of a list
 * @head: the beginning of the list
 * @n: the node to add
 * Return: new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	if (!head)
		return (0);
	tmp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (tmp == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
