#include "lists.h"

/**
 * sum_dlistint - sum of all data in list
 * @head: head of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (!tmp)
		return (0);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
