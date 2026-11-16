#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 *	and initializes it with a specific char.
 *
 * @size: Provided size for array.
 * @c: character to initialise with.
 *
 * Return: Null if size == 0, or returns 'x'.
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(size);
	if (x == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);
}
