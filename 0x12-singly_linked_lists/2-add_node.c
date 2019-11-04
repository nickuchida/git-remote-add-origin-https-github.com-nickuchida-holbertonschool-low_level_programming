#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - add node at beginning of a list
 * @head: the beginning of the list
 * @str: the string to add
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int counter = 0;

	if (!head || !str)
		return (0);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	for (; str[counter] != '\0'; counter++)
		;
	new->len = counter;
	new->next = *head;
	*head = new;
	return (new);
}
