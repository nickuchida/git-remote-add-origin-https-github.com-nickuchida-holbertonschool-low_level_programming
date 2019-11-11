#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - deletes head node and returns its data
 * @head: the list
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	int i = (*head)->n;

	free(*head);
	(*head) = (*head)->next;
	return (i);
}
