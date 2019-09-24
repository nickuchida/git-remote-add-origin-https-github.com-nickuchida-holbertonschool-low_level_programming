#include <stdio.h>
#include "holberton.h"

/**
* main - print Holberton
*
* Return: 0
*/
int main(void)
{
	char c[] = "Holberton";
	c = 0;

	while (c < 8)
	{
		_putchar(c);
		c++;
	}
	return (0);
}
