#include "holberton.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: the pointer
 * @b: contant byte
 * @n: bytes of the memory area pointed to
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
