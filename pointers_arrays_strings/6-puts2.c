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

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	
	int n;

	n = i;
	i = 0;

	while (str[i] < n)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
