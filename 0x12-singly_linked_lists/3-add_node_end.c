#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - add node at beginning of a list
 * @head: the beginning of the list
 * @str: the string to add
 * Return: new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int leng = 0;

	if (!head || !str)
		return (0);
	tmp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);

	for (; str[leng] != '\0'; leng++)
		;
	new->len = leng;

	if (tmp == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
