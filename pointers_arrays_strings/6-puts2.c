#include "main.h"

/**
 * puts2 - function that returns every other character
 *	in a string.
 *
 * @str: string to output.
 *
 */
void puts2(char *str)
{
	int i;
	int n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	n = i;
	i = 0;

	while (i < n)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
