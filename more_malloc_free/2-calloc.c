#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: Number of elements to allocate.
 * @size: size of each element in bytes.
 *
 * Return: NULL if passed '0', of if allocation fails. Else return pointer c.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (nmemb > (UINT_MAX / size))
	{
		return (NULL);
	}
	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		c[i] = 0;
		i++;
	}
	return (c);
}
