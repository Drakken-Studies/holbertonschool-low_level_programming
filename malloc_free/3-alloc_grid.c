#include "main.h"
#include <stdlib>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 *	array of integers.
 *
 * @width: rows in grid array.
 * @height: collumns in grid array.
 *
 * Return: Null on failure, else return "c".
 */
int **alloc_grid(int width, int height)
{
	int *c;
	int a;
	int b;
	/*
	 * a: counter for width.
	 * b: counter for height.
	 * i: int to fill indexes.
	 */
	a = 0;
	b = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	c = malloc([width][height]);
	if (c == NULL)
	{
		return (NULL);
	}
	while (width[a] < '\0')
	{
		while (height[b] < '\0')
		{
			height[b] = '0';
			b++;
		}
		b = 0;
		width[a] = '0';
		a++;
	}
	return (c);
}
