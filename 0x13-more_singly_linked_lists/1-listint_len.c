#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}

	return (element);
}
