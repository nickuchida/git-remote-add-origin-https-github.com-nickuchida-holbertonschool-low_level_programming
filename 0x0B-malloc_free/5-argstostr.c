#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts length of string
 * @s: string to count
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * *argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument string
 * Return: result
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int c = 0;
	int length = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
		length += _strlen(av[i]);

	s = malloc(sizeof(char) * (length + ac + 1));
	if (s == NULL)
		return (NULL);

	for (i = 1; i < length; i++)
	{
		char *temp = av[i];

		for (j = 1; temp[j] != '\0'; j++)
		{
			s[c] = temp[j];
			c++;
		}
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
