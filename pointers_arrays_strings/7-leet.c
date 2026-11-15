#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @s: Given string to encode into 1337.
 *
 * Return: encoded string.
 */
char *leet(char *s)
{
	int i;
	int c;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		while (let[c] != '\0')
		{
			if (s[i] == let[c])
			{
				s[i] = num[c];
			}
			c++;
		}
		i++;
		c = 0;
	}
	return (s);
}
