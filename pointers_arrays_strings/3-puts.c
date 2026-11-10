#include "main.h"

/**
 * _puts - function that returns the given string.
 *
 * @str: string to output.
 *
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
