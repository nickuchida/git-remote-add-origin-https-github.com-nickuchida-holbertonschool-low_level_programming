#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string printed
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
