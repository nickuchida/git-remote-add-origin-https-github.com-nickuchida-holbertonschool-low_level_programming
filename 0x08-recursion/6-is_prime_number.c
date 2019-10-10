#include "holberton.h"

/**
 * is_prime_helper - adds counter  n
 * @n: number
 * @i: counter
 * Return: result
 */
int is_prime_helper(int n, int i)
{
	if (n < 2)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i - 1));
}
/**
 * is_prime_number - tells if number is prime or not
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n / 2));
}
