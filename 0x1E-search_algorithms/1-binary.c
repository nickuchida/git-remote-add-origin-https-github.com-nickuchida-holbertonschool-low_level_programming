#include "search_algos.h"

/**
 * binary_search - binary search in array
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: location or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t max = size - 1, min = 0;
	size_t i, median;

	if (array == NULL)
		return (-1);
	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i < max; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		median = (min + max) / 2;
		if (value == array[median])
			return (median);
		else if (value < array[median])
			max = median - 1;
		else if (value > array[median])
			min = median + 1;
	}
	return (-1);
}
