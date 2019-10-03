#include "holberton.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *rev = a + n - 1;
	int i, temp;

	for (i = 0; a[i] <= n / 2; i++)
	{
		temp = *rev;
		*rev = *a;
		*a = temp;
		rev--;
		a++;
	}
}
