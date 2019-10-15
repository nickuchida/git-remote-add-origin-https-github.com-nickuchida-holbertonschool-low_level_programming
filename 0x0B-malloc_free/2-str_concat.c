#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;
	int l1 = 0;
	int l2 = 0;

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	str = malloc(sizeof(char) * l1 + l2 + 1);
	if (str == 0)
		return NULL;
	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	for (j = 0; j < l2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
