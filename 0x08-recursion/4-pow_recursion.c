#include "holberton.h"

/**
 * _pow_recursion - returns value of x to the power of y
 * @x: number entered
 * @y: number of the exponent
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
