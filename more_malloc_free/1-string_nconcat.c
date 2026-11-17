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
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * null_check - checks if value is null
 *
 * @x: char to check
 *
 * Return: Returns char if valid, else NULL.
 */
char *null_check(char *x)
{
	if (x == NULL)
	{
		x = "";
	}
	return (x);
}
/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number to cross check.
 *
 * Return: Null if failed to allocate memory, else concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a;
	unsigned int b;
	unsigned int i;
	unsigned int j;

	s1 = null_check(s1);
	s2 = null_check(s2);
	if (n < _strlen(s2))
	{
		b = (n);
	}
	else
	{
		b = _strlen(s2);
	}
	a = _strlen(s1);
	i = 0;
	j = 0;
	c = malloc(a + b + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (j < b)
	{
		c[i] = s2[j];
		j++;
		i++;
	}
	c[i] = '\0';
	return (c);
}
