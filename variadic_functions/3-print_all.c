#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints any supported data type.
 *
 * @format: string containing the types of arguments to be printed.
 *
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *str;
	char *separator;

	i = 0;
	va_start(args, format);
	separator = "";
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, a_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
