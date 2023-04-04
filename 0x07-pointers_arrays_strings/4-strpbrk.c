#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: the string
 * @accept: string that matched
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *         NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;
	while (s[i] !=  '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
