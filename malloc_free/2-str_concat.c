#include "main.h"
#include <stdlib.h>
/**
 * _strlen - function that returns length of string.
 *
 * @str: string to return length of.
 *
 * Return: Length of string.
 *
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - function to concatenate two strings.
 *
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 *
 * Return: NULL on failure, else return "c".
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int a;
	int b;
	int d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = _strlen(s1);
	b = _strlen(s2);
	c = malloc(a + b  + 1);
	d = 0;
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
