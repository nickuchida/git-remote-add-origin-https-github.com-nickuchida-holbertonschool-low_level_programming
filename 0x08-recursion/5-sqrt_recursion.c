#include "holberton.h"

/**
 * _sqrt_recursion_helper - assists sqrt function with a counter and edge cases
 * @n: integer
 * @i: counter
 * Return: result
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (n == 0 || n == 1)
		return (i);
	if (i * i == n)
		return (i);
	if (i == n)
		return (-1);
	if (n <= i)
		return (-1);
	return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find square root of
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (_sqrt_recursion_helper(n, i));
}
