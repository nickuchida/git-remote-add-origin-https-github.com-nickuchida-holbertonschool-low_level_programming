#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - prints the numbers 0 through 14, 10 times
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int a;

	for (c = 0; c <= 9; c++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
