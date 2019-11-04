#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t print_listint(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		element++;
	}

	return (element);
}
