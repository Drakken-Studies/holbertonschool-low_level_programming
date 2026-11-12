#include "main.h"
/**
 *  _strcmp - function that compares two strings.
 *
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: 0 if strings are the same. Else digit variance.
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	c = (s1[i] - s2[i]);
	return (c);
}
