#include "main.h"
/**
 * string_toupper - converts a string to all uppercase.
 *
 * @s: supplied array.
 *
 * Return: returns converted string.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (s[i] - 32);
		}
		i++;
	}
	return (s);
}
