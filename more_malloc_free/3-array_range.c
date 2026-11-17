#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * array_range - function that creates an array of integers.
 *
 * @min: smallest int, start point.
 * @max: largest int, end point.
 *
 * Return: Pointer to array, else NULL if failure to allocate.
 *
 */
int *array_range(int min, int max)
{
	int *c;
	long size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = (long)max - min + 1;
	if (size > (INT_MAX / (int)sizeof(int)))
	{
		return (NULL);
	}
	c = malloc(size * sizeof(int));
	if (c == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		c[i] = min + i;
		i++;
	}
	return (c);
}
