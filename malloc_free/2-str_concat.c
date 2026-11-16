#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: NULL if failure, else returns string "c".
 *
 */
char *str_concat(char *s1, char *s2)
{
	/*
	 * @c: New array to hold concat string.
	 * @a: Counter for array size requirement
	 * @b: Counter for array indexing s1.
	 * @c: Counter for array indexing s2.
	 */

	char *c;
	int a;
	int b;
	int d;

	a = 0;
	b = 0;
	d = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	c = malloc(a + b  + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (s1[b] != '\0')
	{
		c[b] = s1[b];
		b++;
	}
	while (s2[d] != '\0')
	{
		c[b] = s2[d];
		b++;
		d++;
	}
	c[b] = '\0';
	return (c);
}
