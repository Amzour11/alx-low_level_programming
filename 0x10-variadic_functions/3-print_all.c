#include "variadic_functions.h"

/**
 * format_char - formats character
 * @separator: the string
 * @ap: arg pointer
 */

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - formats integers
 * @separator: the string
 * @ap: arg pointer
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - formats float
 * @separator: the string
 * @ap: arg pointer
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - formats string
 * @separator: the string
 * @ap: arg pointer
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - function that prints anything
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	int a = 0, i;
	char *separator = "";
	va_list ap;
	token_t token[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[a])
	{
		i = 0;
		while (tokens[i].token)
		{
			if (format[a] == tokens[i].token[0])
			{
				tokens[i].f(separator, ap);
				searator = ", ";
			}
			i++;
		}
		a++;
	}
	printf("\n");
	va_end(ap);
}

