#include "listsl.h"

/**
 * free_dlistint - frees a list
 * @head: the head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	tmp = head;

	while (tmp)
	{
		free(tmp);
		tmp = tmp->next;
	}
}
