#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of program followed by a new line
 * Return: name of program
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
