#include <stdio.h>
#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;

	while (1)
	{
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');
		m2 += 1;
		if (m2 == 10)
		{
			m2 = 0;
			m1 += 1;
			if (m1 == 6)
			{
				m1 = 0;
				h2 += 1;
				if (h1 == 2 && h2 == 4)
					break;
				if (h2 == 10)
				{
					h2 = 0;
					h1 += 1;
				}
			}
		}
	}
}
