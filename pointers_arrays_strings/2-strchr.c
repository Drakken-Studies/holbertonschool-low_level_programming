#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: Array to search.
 * @c: Character searching for.
 *
 * Return: Pointer to first occurence of c in string, else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
