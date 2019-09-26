#include <stdio.h>
#include "holberton.h"

/**
 * times_table - creates a 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int y, x;
	int num;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			num = y * x;
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			else if (x != 0)
			{
				_putchar(' ');
			}
			_putchar(num % 10 + '0');
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
