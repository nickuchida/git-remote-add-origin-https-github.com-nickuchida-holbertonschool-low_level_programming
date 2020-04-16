#include "search_algos.h"

/**
 * linear_search -  linear search for value
 * @array: the array being searched
 * @size: size of array
 * @value: the value
 * Return: yes or no
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
