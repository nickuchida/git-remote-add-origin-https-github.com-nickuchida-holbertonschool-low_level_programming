#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements of size
 * @size: size of bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(sizeof(int) * (nmemb * size));
	if (arr == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		;
	return (arr);
}
