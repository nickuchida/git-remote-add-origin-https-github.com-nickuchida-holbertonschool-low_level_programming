#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: types of arguments passed into function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list print;
	int i = 0;
	char *s, *string = "(nil)";

	va_start(print, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(print, int));
			break;
		case 'i':
			printf("%d", va_arg(print, int));
			break;
		case 'f':
			printf("%f", va_arg(print, double));
			break;
		case 's':
			if (s != NULL)
			{
				s = va_arg(print, char *);
				string = s;
			}
			printf("%s", string);
			break;
		default:
			i++;
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(print);
}
