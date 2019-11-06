#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
