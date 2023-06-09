#include "main.h"
#include <stddef.h>
/**
 * *_strchr - function that locates a character in a string
 *
 * @s: pointer
 * @c: constant character
 *
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
