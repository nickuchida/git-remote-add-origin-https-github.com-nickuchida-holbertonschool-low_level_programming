#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: numbers being added
 * Return: result
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int j, length;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			length = strlen(s);
			for (j = 0; j < length; j++)
			{
				if (isdigit(*(s + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
