#include <stdio.h>
#include "holberton.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of lines
 * Return: r
 */
void print_line(int n)
{
	int r;

	for (r = 0; r < n; r++)
		_putchar('_');
	_putchar('\n');
}
