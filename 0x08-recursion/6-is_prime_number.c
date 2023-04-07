#include "main.h"

/**
 * is_prime_number - check if the integer is a prime number
 *
 * @n: int
 * @a: int
 *
 * Return: 1 if the integer is a prime number
 *         otherwise return 0
 */

int check(int n, int a);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - check if number is a prime
 *
 * @n: int
 * @a: int
 *
 * Return: int
 */

int check(int n, int a)
{
	if (a >= n && n > 1)
		return (1);
	else if (n % a == 0 || n <= 1)
		return (0);
	else
		return (check(n, a + 1));
}
