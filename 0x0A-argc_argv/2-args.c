#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: result
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
