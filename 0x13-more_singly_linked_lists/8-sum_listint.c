#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data in list
 * @head: list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
