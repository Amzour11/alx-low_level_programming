#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * A C program that prints true or false validation
 *
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n", n);
	else if (n == 0)
		printf("is zero\n", n);
	else
		printf("is negative\n", n);
	return (0);
}
