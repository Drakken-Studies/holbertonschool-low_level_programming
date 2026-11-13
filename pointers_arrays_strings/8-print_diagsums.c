#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 *	diagonals of a square matrix of integers.
 *
 * @a: pointer to arrays
 * @size: size of rows and collumns.
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k;

	int sum1;
	int sum2;

	i = 0;
	j = 0;
	k = size - 1;
	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 += a[j];
		sum2 += a[k];

		j += size + 1;
		k += size - 1;

		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
