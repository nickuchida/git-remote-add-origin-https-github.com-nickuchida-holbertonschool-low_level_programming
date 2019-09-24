#include <stdio.h>
#include "holberton.h"

/**
 * _isalpha - tells if a character is alphabetical
 *
 * Return: r
 */
int _isalpha(int c)
{
	int r;

	if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	else if (c >= 65 && c <= 90)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
