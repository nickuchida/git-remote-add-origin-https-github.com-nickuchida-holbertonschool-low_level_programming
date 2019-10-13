#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints number of arguments passed
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
