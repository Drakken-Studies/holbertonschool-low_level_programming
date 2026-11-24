#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @n: Number of expected args to be passed.
 * @separator: is the string to be printed between numbers.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(args, int));
		while (i < (n - 1) || separator != NULL)
		{
			printf("%s", separator);
			i++;
		}
	}
	_putchar('\n');
	va_end(args);
}
