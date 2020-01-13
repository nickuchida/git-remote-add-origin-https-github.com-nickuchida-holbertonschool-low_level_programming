#include "lists.h"

/**
 * print_dlistint - print linked list
 * @h: head
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int element = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		element++;
	}

	return (element);
}
