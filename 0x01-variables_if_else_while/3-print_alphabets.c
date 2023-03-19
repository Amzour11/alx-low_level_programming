#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*write a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*write A -Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
