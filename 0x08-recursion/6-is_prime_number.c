#include "main.h"
#include <stdio.h>

/**
 * check - checks if number is a prime
 * @a: int
 * @b: int
 * Return: int
 */

int check(int a, int b)
{
	if (a % b == 0 || n <= 1)
		return (0);
	else if (b >= a && a > 1)
		return (1);
	else
		return (check(a, b + 1));
}

/**
 * is_prime_number - check if integer is a prime number
 *
 * @n: int
 *
 * Return: 1 if the input integer is a prime number
 *         otherwise return 0
 */

int is_prime_number(int n)
{
	return (check(n, 2));
}
