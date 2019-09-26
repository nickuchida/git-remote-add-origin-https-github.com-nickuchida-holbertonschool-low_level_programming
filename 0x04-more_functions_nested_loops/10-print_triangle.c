#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = size; a > 0; a--)
		{
			for (s = 0; s < a - 1; s++)
				_putchar(' ');
			for (b = a; b <= size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
