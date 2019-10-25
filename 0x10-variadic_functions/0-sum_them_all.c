#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - return a sum of parameters
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	unsigned int sum = 0;

	va_start(add, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(add, unsigned int);
	va_end(add);
	return (sum);
}
