#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 *
 * @min: starting int
 * @max: max int
 *
 * Return: array of integer
 */

int *array_range(int min, int max)
{
	int n, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (n = 0; min <= max; n++)
		ptr[n] = min++;

	return (ptr);
}
