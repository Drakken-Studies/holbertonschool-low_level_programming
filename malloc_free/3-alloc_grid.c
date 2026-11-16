#include "main.h"
#include <stdlib.h>
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
	int **c;
	int a;
	int b;
	int i;

	a = 0;
	b = 0;
	i = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	c = malloc(height * sizeof(int *));
	if (c == NULL)
	{
		return (NULL);
	}
	while (a < height)
	{
		c[a] = malloc(width * sizeof(int));
		if (c[a] == NULL)
		{
			while (i < a)
			{
				free(c[i]);
				i++
			}
			free(c);
			return (NULL);
		}
		while (b < width)
		{
			c[a][b] = 0;
			b++;
		}
		a++;
		b = 0;
	}
	return (c);
}
