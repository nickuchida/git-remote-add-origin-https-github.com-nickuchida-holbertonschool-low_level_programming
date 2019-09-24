#include <stdio.h>
#include "holberton.h"

/**
 * _abs - tells the absolute value of a number
 * @c: the number being entered
 * Return: r
 */
int _abs(int c)
{
	int r;

	if (c < 0)
	{
		r = -c;
	}
	else
	{
		r = c;
	}
	return (r);
}
