#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints the name of program followed by a new line
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: name of program
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
