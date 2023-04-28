#include "lists.h"

/**
 * _strlen - return the length of string
 * @s: the string
 *
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);
	while (*s++)
		n++;
	return (n);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to first node
 *
 * Return: size of the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
