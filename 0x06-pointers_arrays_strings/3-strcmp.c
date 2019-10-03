#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
