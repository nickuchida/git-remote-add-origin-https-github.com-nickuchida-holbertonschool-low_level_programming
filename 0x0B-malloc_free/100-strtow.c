#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int wordcount(char * str)
{
	int i;
	int wc = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			wc++;
			i++;
			for( ; str[i] != ' ' && str[i] != '\0'; i++)
				;
		}
	}
	return (wc);
}

int word_len(char *str)
{
	int i, wl = 0;
	for (i = 0; str[i] && str[i] != ' '; i++)
		++wl;
	return (wl);
}

void freegrid(char **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}

char **strtow(char *str)
{
	int i, j = 0, k;
	char **s;
	int wc = wordcount(str);

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char *) * wordcount(str));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			s[j] = malloc((word_len(str + i) + 1) * sizeof(char));
			if (s[j] == NULL)
			{
				freegrid(s, wc);
			}
			for (k = 0; str[i] && str[i] != ' '; i++, k++)
				s[j][k] = str[i];
			s[j][k] = '\0';
			j++;
		}
	}
	s[j] = '\0';
	return (s);
}
