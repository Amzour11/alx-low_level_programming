#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: the string
 * @n: the arguments
 * @...: integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (a--)
		printf("%d%s", va_arg(ap, int),
				a ? (separator ? separator : "") : "\n");
	va_end(ap);
}
