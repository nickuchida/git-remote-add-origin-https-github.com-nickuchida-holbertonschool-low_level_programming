#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

/**
 * free_listint2 - frees a linked list
 * @head: the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
