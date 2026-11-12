#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointer to array.
 * @n: size of array, intergers.
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;
	int temp;

	i = 0;
	c = (n - 1);
	while (a[i] < a[c])
	{
		temp = a[i];
		a[i] = a[c];
		a[c] = temp;
		i++;
		c--;
	}
}
