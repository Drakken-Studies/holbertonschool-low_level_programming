#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 *	space in memory, which contains a copy of the string given
 *	as a parameter.
 *
 * @str: Provided string to copy.
 *
 * Return: If allowcation fails or array size = 0 returns NULL, else
 *	returns copied string (c).
 */
char *_strdup(char *str)
{
	int i;
	int a;
	char *c;

	i = 0;
	a = 0;
	/* Checks if provided string pointer is valid */
	if (str == NULL)
	{
		return (NULL);
	}
	/*Checks required size for array */
	while (str[i] != '\0')
	{
		i++;
	}
	/* Create array with size of i + 1 for the newline break */
	c = malloc(i + 1);
	/* Check if allocation failed */
	if (c == NULL)
	{
		return (NULL);
	}
	/* Copy string to new array */
	while (a <= i)
	{
		c[a] = str[a];
		a++;
	}
	return (c);
}
