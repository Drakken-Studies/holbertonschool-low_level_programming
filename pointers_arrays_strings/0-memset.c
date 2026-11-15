#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: Arry provided
 * @b: Replace with this
 * @n: Number of bytes to replace
 *
 * Return: New value of original 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
