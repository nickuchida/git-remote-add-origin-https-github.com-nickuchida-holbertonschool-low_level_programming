#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free the dogs
 * @d: structure dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		free(NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
