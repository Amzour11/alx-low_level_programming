#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all the numbers of base 16 in lowercase
 *
 * Return: 0
*/

int main(void)
{
	int x;
	char y;

	for (x = 0 ; < 10 ; x++)
		putchar(x + '0');
	for (y = 'a' ; y <= 'f' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
