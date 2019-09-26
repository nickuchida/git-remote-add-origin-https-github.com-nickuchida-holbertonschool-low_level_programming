#include <stdio.h>
#include "holberton.h"

/**
 * print_square - print a square
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			putchar('\n');
		}
	}
}
