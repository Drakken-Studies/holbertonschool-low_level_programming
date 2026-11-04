#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all integers between a give number and 98 above it
 * @n: Number to be checked.
 */
void print_to_98(int n)
{
	int i;

	i = n;

	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	_putchar('\n');
	}
	else if (i > 98)
	{
		while (i > 98)
		{
			Printf("%d, ", i);
			i--;
		}
	_putchar('\n');
	}
}
