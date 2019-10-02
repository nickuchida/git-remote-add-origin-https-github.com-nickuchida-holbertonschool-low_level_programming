#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int l;
	char *t = s;
	int i;

	for (l = 0; *t != '\0'; t++)
		l++;
	t--;
	l--;
	for (i = 0; i <= l / 2; i++)
	{
		char tmp = *t;
		*t = *s;
		*s = tmp;
		t--;
		s++;
	}
}
