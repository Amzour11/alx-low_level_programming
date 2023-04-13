#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *            which contains a copy of the string given as a parameter
 *
 * @str: the string
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	int n = 0;
	int size = 0;
	char *c;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	c = malloc(size * sizeof(*str) + 1);

	if (c == 0)
		return (NULL);

	else
	{
		for (; n < size; n++)
			c[n] = str[n];
	}
	return (c);
}
