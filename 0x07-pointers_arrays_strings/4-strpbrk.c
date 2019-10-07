#include "holberton.h"

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: set of bytes in string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		s++;
		accept++;
		if (*s == *accept)
		{
			s--;
			return (s);
		}
	}
	if (*accept == '\0')
		return (s);
	return (0);
}
