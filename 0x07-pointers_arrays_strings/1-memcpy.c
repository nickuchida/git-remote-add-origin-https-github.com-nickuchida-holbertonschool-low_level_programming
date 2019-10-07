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
	unsigned int count;
	char *pointdest = dest;
	char *pointsrc = src;

	for (count = 0; count < n; count++)
	{
		pointdest[count] = pointsrc[count];
	}
	return (dest);
}
