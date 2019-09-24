#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
 * print_to_98 - this program prints numbers in order until it reaches 98
 * @n: number entered
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
				n--;
			}
		}
	}
	else
		printf("%d\n", n);
}
