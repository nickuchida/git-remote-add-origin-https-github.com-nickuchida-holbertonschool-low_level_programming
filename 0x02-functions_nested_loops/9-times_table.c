#include <stdio.h>
#include "holberton.h"

/**
 * times_table - creates a 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		k = i;
		for (j = 0; j <= 9; j++)
		{
			printf("%d, ", k * j);
		}
		printf("\n");
	}
}
