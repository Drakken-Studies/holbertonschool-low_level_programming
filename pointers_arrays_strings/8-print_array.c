#include "main.h"

/**
 * print_array - function that prints n elements of an array of
 *	integers, followed by a new line.
 *
 * @a: pointer to array.
 * @n: given number for elements to print.
 *
 */
void print_array(int *a, int n);
{
	int i;

	i = 0;
	printf("%d", a[i]);
	i++;
	while (i < 5)
	{
		printf(", %d", a[i]);
		i++;
	}
	putchar('\n');
}
