#include "holberton.h"

/**
 * *_strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;
	while ((*p = *src) != '\0')
	{
		p++;
		src++;
	}
	return (dest);
}
