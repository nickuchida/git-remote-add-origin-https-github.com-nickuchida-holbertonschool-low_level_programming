#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns value of a bit at an index
 * @n: the number to be checked
 * @index: location of the bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = mask << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
