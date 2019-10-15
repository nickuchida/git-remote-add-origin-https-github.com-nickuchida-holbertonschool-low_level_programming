#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: copy
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *copy;

	while (str[length])
		length++;
	copy = malloc(sizeof(char) * length + 1);
	if (copy == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
