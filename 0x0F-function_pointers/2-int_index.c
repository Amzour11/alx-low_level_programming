#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: int array
 * @size: array's size
 * @cmp: compare function
 *
 * Return: int index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[j]))
				return (j);
			j++;
		}
	return (-1);
}
