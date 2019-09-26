#include "holberton.h"

/**
 * _isupper - checks for uppercase letter
 * @c: character entered
 * Return: r
 */
int _isupper(int c)
{
	int r;

	if (c >= 'A' && c <= 'Z')
		r = 1;
	else
		r = 0;
	return (r);
}
