#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: String provided.
 * @accept: accepted characters to check agains 's'
 *
 * Return: a pointer to the byte in s that matches one of the bytes in
 *	accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		c = 0;
		while (accept[c] != '\0')
		{
			if (accept[c] == s[i])
			{
				return (&s[i]);
			}
			c++;
		}
		i++;
	}
	return (NULL);
}
