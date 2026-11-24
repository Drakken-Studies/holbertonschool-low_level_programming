#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @n: Number of expected args to be passed.
 * @separator: is the string to be printed between numbers.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
