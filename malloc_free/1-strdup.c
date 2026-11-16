#include "main.h"
#include <stdlib.h>

/**
 *
 *
 */
char *_strdup(char *str)
{
	int i;
	int a;
	char *c;

	i = 0;
	a = 0;
	/*Checks required size for array */
	while (i != '\0')
	{
		i++;
	}
	/* Checks if size is 0 */
	if (i == 0)
	{
		return (NULL);
	}
	/* Create array with size of i */
	c = malloc(i);
	/* Check if allocation failed */
	if (c == NULL)
	{
		return (NULL);
	}
	/* Copy string to new array */
	while (a < i)
	{
		c[i] = str[i];
		a++;
	}
	return (c);
}
