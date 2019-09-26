#include <stdio.h>
#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: character entered
 * Return: r
 */
int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
		r = 1;
	else
		r = 0;
	return (r);
}
