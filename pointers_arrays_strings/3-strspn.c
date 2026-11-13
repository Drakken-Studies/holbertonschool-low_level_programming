#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: String provided.
 * @accept: How many bytes cosist within 's'
 *
 * Return: number of bytes in the initial segment of s which consist
 *	only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int b;
	int c;
	unsigned int t;

	i = 0;
	t = 0;
	while (s[i] != '\0')
	{
		b = 0;
		c = 0;
		while (accept[c] != '\0')
		{
			if (accept[c] == s[i])
			{
				b = 1;
			}
			c++;
		}
		if (b == 0)
		{
			return (t);
		}
		else if (b == 1)
		{
			i++;
			t++;
		}
	}
	return (t);
}
