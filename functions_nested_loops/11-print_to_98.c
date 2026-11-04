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

	while (i <= (n + 98))
	{
		printf("%d, ", i);
	}
	_putchar('\n');
	i++;
}
