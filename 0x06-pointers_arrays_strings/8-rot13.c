#include "holberton.h"

/**
 * *rot13 - encodes a string into rot13
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '0'; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
