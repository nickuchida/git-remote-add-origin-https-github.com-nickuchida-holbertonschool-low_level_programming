#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int l = 0;
	int n;

	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l - 1) / 2;
	while (n < l)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
