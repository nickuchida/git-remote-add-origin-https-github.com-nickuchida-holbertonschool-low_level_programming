#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
		l = l / 2;
	else
	{
		l = (l - 1) / 2;
		l++;
	}
	while (str[l])
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
