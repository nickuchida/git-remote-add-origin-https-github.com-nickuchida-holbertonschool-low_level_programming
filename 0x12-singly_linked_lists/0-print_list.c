#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: the structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	printf("[%d] %s\n", h->len, h->str);
	printf("[%d] %s\n", h->len, new->next);
	return (nodes);
}
