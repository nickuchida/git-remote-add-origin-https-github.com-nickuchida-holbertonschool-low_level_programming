#include "lists.h"

/**
 * get_dnoteint_at_index - return the nth node of list
 * @head: the head of list
 * @index: index of node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	if (!tmp)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
	}
	return (tmp);
}
