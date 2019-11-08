#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1
 * @n: number being analyzed
 * @index: location of the value of a bit
 * Return: the value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = mask << index;
	*n |= mask;
	if (*n == 0)
		return (0);
	else
		return (1);
}
