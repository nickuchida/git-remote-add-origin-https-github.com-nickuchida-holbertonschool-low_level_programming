#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **dest;
	int i, j, x;

	if (width <= 0 || height <= 0)
		return (NULL);

	dest = malloc(sizeof(int *) * height);

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dest[i] = malloc(sizeof(int) * width);
		if (dest[i] == NULL)
		{
			for (x = 0; x < height; x++)
				free(dest[x]);
			free(dest);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			dest[i][j] = 0;
		free(dest[j]);
	}
	return (dest);
}
