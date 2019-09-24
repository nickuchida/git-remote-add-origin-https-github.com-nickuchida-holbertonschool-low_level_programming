#include <stdio.h>
#include "holberton.h"

/**
 * _islower - tells if lowercase
 * @c: the character entered
 * Return: int r
 */
int _islower(int c)
{
	int r;

	if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
