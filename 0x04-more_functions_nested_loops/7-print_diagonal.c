#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - prints a diagonal lin
 * @n: number of spaces before diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int r;
	int s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 0; r < n; r++)
		{
			for (s = 1; s <= r; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
