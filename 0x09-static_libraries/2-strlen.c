#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: character to check
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
