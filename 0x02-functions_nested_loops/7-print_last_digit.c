#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @c: the number entered
 * Return: r
 */
int print_last_digit(int c)
{
	int r = c % 10;

	if (r < 0)
	{
		r = -r;
		_putchar(r + '0');
	}
	else
		_putchar(r + '0');
	return (r);
}
