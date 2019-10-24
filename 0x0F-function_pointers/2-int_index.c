#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function to compare values
 * Return: returns index of first element that cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}
	return (-1);
}
