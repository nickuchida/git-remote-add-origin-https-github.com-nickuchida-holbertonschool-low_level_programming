#include "holberton.h"

/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	char letter[] = "aeotlAEOTL";
	char leet[] = "4307143071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '0'; j++)
		{
			if (s[i] == letter[j])
				s[i] = leet[j];
		}
	}
	return (s);
}
