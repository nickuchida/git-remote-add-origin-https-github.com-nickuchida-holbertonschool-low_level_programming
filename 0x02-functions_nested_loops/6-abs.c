#include <stdio.h>
#include "holberton.h"

/**
 * _abs - tells the absolute value of a number
 * @int: the number being entered
 * Return: r
 */
int _abs(int c)
{
	int r;
	int c;

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
