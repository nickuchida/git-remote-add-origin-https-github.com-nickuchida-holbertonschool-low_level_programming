#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the character string being measured
 * Return: i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - convers a binary number to unsigned int
 * @b: binary number
 * Return: unsigned int conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int base = 1, count, n;

	count = _strlen(b);
	count--;

	for (n = 0; count >= 0; count--)
	{
		if (b[count] == '1')
			n += base;
		base *= 2;
	}
	return (n);
}
