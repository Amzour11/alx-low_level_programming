#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program that prints the size of various types
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("%u\n", sizeof(char));
	printf("%u\n", sizeof(int));
	printf("%u\n", sizeof(float));
	printf("%u\n", sizeof(double));

	return (0);
}
