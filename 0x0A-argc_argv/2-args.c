#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments received
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
