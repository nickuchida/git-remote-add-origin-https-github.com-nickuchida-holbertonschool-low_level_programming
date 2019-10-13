#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: numbers being added
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 2)
		printf("Error\n");
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
