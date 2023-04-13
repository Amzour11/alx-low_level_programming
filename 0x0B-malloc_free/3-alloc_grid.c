#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: second array
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	array = malloc(sizeof(*array) * height);

	if (width <= 0 || height <= 0 || array == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(**array) * width);
			if (array[i] == 0)
			{
				/*if malloc fails free all*/
				while (i--)
					free(array[i]);
				free(array);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
	}
	return (array);
}
