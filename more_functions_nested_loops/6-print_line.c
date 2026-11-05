#include "main.h"
/**
 * print_line - will print a "_" the length of the provided number.
 *
 * @n: provided number.
 *
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
