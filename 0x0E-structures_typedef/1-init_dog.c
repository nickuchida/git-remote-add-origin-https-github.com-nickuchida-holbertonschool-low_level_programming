#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initiates a dog
 * @d: which dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
