#include "main.h"

/**
 * puts_half - function that returns half the given string.
 *
 * @str: string to output.
 *
 */
void puts_half(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	b = a + 1;
	c = b / 2;
	a = 0;
	while (a < b && str[c] != '\0')
	{
		_putchar(str[c]);
		a++;
		c++;
	}
	_putchar('\n');
}
