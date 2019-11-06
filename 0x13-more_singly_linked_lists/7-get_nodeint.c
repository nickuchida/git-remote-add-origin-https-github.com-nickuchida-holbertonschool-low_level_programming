#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_nodeint_at_index - return the nth node of a list
 * @head: list
 * @index: index to return the node of
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		head = head->next;
		counter++;
		if (counter == index)
			break;
	}
	return (head);
}
