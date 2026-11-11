#include "main.h"

/**
 * _puts - function that returns every other character
 * 	in a string.
 *
 * @str: string to output.
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
