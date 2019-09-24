#include <stdio.h>
#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is the number entered in the program
 * Return: r
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		r = -1;
		_putchar('-');
	}
	else
	{
		r = 0;
		_putchar('0');
	}
	return (r);
}
