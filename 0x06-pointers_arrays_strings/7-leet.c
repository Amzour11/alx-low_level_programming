#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 *
 * @c: the string
 *
 * Return: encoded string
 */

char *leet(char *c)
{
	char *cp = c;
	char letter[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(letter) / sizeof(char); i++)
		{
			/*32 is the difference between lowercase and uppercase letters*/
			if (*c == letter[i] || *c == letter[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}
	return (cp);
}
