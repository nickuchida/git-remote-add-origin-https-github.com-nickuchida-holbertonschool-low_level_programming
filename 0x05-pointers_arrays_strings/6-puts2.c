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
		if (str + 1 != '\0')
			str += 2;
		else
			break;
	}
	_putchar('\n');
}
