#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - convers a binary number to unsigned int
 * @b: binary number
 * Return: unsigned int conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int base = 1, count = 0, n;

	if (!b)
		return (0);

	for (; b[count] != '\0'; count++)
		if (b[count] != '0' && b[count] != '1')
			return (0);
	count--;
	for (n = 0; count >= 0; count--)
	{
		if (b[count] == '1')
			n += base;
		base *= 2;
	}
	return (n);
}
