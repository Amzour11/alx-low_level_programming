#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 *
 * @size: the size
 * @c: char
 *
 * Return: a pointer to the array
 *         NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);

	while (size--)
		i[size] = c;
	return (i);
}
