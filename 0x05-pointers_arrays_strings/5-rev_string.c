#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: the string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int a = 0;
	int b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
