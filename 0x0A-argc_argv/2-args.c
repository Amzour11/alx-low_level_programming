#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a = 0;

	while (argc--)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
