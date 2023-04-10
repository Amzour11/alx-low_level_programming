#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 *        to make change for an amount of money
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
	int a, count = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1,};

	for (a = 0; a < 5; a++)
	{
		if (money >= cents[a])
		{
			count += money / cents[a];
			money = money % cents[a];
			if (money % cents[a] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", count);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
