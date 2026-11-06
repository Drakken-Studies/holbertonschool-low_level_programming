#include "main.h"
/**
 * print_diagonal - prints a diagonal line on the page.
 *
 * @n: Number of times \ should be printed.
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (n <= 0)
	{
 		_putchar('\n');
	}
	while (i < n)
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
		j = 0;
	}
}
