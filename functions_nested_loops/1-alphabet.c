#include "main.h"

/**
 * print_alphabet - prints alphabet on single line with return at the end.
 *
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
		_putchar('\n');
}
