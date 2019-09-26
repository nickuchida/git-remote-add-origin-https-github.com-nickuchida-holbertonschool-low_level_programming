#include <stdio.h>

/**
 * main - prints 1 to 100, prints fizz for multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
		printf(" ");
	}
	printf("\n");
	return (0);
}
