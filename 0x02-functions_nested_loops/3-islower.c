#include <stdio.h>
#include "holberton.h"

/**
 * _islower - tells if lowercase
 *
 * Return: int r
 */
int _islower(int c)
{
	int r;
	int c;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
		printf("%d", r);
	}
	else
	{
		r = 0;
		printf("%d", r);
	}
	return (int r);
}
