#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *                  of a square matrix of integers
 *
 * @a: array of int
 * @size: size of square
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, sq1 = 0, sq2 = 0;

	for (i = 0; i < size; i++)
	{
		sq1 += a[i];
		sq2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sq1);
	printf("%d\n", sq2);
}
