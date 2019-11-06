#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: list
 * @idx: index
 * @n: node to add
 * Return: new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int counter = 0;

	while (*head)
	{
		*head = *head->next;
		counter++;
		if (counter == idx)
			*head->n = n;
	}
	if (*head == NULL)
		return (NULL);
	return (*head);
}
