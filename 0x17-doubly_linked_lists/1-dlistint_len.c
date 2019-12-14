#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t element = 0;

	while (h)
	{
		h = h->next;
		element++;
	}

	return (element);
}
