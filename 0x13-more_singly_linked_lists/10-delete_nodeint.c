#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint_at_index - delete node at index of a list
 * @head: list
 * @index: index to delete node at
 * Return: success or failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *delete = *head;

	if (head == NULL)
		return (-1);

	while (index > 0 && delete != NULL)
	{
		index--;
		prev = delete;
		delete = delete->next;
	}
	if (index > 0)
		return (-1);
	if (index == 0 && delete == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(delete);
		return (1);
	}
	prev->next = delete->next;
	free(delete);
	return (1);
}
