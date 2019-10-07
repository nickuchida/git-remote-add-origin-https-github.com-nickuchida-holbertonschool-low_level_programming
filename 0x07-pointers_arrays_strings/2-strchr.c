#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		s++;
		if (s[count] == c)
			return (s);
	}
	if (s[count] == c)
		return (s);
	return (0);
}
