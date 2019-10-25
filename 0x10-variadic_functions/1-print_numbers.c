#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: string printed between numbers
 * @n: numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, unsigned int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);
}
