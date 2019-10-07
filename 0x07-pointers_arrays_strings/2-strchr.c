#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	return (s);
}
