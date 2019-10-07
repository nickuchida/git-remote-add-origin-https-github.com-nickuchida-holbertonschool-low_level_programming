#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @n: number of bytes being copied
 * @src: memory area bytes are being copied from
 * @dest: memory area bytes are being copied to
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pointdest = dest;
	char *pointsrc = src;

	while (n)
	{
		*pointdest = *pointsrc;
		n--;
	}
	return (dest);
}
