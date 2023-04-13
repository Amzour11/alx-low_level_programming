#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 *
 * @s: the string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second strring
 *
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int n;
	int size1, size2;
	char *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	c = malloc((size1 + size2) * sizeof(char) + 1);
	if (c == 0)
		return (0);

	for (n = 0; n <= size1 + size2; n++)
	{
		if (n < size1)
			c[n] = s1[n];
		else
			c[n] = s2[n - size1];
	}
	c[n] = '\0';
	return (c);
}
